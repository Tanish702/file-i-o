#include<stdio.h>
int main()
{
    FILE *tanish;
   tanish = fopen("student.txt","w");

    char name[100];
    int age;
    float cgpa;

    printf("enter the name  of the student\n");
    scanf("%s",name);

    printf("enter the age of the student\n");
    scanf("%d",&age);

    printf("enter the cgpa  of the student\n");
    scanf("%f",&cgpa);

    fprintf(tanish,"student name : %s\n",name);
    fprintf(tanish,"student age : %d\n",age);
    fprintf(tanish,"student cgpa : %f\n",cgpa);

    fclose(tanish);
 return 0;
}
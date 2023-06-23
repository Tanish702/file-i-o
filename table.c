#include<stdio.h>
int main()
{
    int num;
    printf("enter the number for table : ");
    scanf("%d",&num);
    FILE *ptr;
    ptr = fopen("table.txt","w");
    for (int i = 1; i <=10; i++)
    {
        fprintf(ptr,"%d x %d = %d\n",num,i,num*i);  
    }
    fclose(ptr);
    return 0;
}
#include<stdio.h>
int main()
{
    FILE *ptr;
    int name1,name2,salary1,salary2;
    scanf("%d %d ",&name1,&name2);
    scanf("%d %d",&salary1,&salary2);

    ptr = fopen("salary.txt","w");
    fprintf(ptr,"%d = %d",name1=salary1);
    fprintf(ptr,"%d = %d",name2 = salary2);
    fclose(ptr);
    return 0;
}
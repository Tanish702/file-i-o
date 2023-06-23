#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("sum.txt","r");
    int a,b;
    fscanf(ptr,"%d",&a);
    fscanf(ptr,"%d",&b);

    fclose(ptr);
    ptr = fopen("sum.txt","w");
    fprintf(ptr," %d",a+b);
    fclose(ptr);
}
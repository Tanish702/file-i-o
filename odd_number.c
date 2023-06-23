#include<stdio.h>
int main()
{
    FILE *number;
    number = fopen("odd.txt","w");
    int n,i;
    printf("enter the n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2 !=0){
            fprintf(number,"%d\n",i);
        }

    }
    fclose(number);
    return 0;
}
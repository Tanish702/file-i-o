#include<stdio.h>

void printArray(int*a,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void bubblesort(int *a, int n){
    int temp;
    for (int i = 0; i < (n-1); i++) // no of passes
    {
        printf("pass number is %d\n",i+1);
        for ( int j = 0; j < n-1-i; j ++) // comparison
        {
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
    }
    
}
int main()
{
    int a[]={12,10,25,26,9};
    int n=5;
    printArray(a,n);
    bubblesort(a,n);
    printArray(a,n);
    
}
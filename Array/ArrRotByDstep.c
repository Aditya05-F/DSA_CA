#include<stdio.h>
#include<stdlib.h>
void arrRot(int arr[],int n,int d);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter The Size Of The Array: ");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",arr+i);
    }
    
    int d;
    printf("Enter the steps:");
    scanf("%d",&d);
    arrRot(arr,n,d);
    for (int i = 0; i <n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
void arrRot(int arr[],int n,int d)
{
    int c=0;
    while(c!=d)
    {
        int temp=arr[0];
        for(int i=0;i<=n-2;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
        c++;
    }
}

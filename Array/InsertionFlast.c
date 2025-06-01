#include<stdio.h>
void insertionFlast(int arr[],int n)
{
    for (int i = n-2; i>=0; i--)
    {
        for (int j = i; j<n; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    
}
void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}
int main(int argc, char const *argv[])
{
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    print(arr,10);
    insertionFlast(arr,10);
    printf("\n");
    print(arr,10);
    return 0;
}

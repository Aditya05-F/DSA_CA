#include<stdio.h>
void insertionDec(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j =i; j >0; j--)
        {
            if(arr[j-1]<arr[j])
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
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
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    print(arr,10);
    insertionDec(arr,10);
    printf("\n");
    print(arr,10);
    return 0;
}

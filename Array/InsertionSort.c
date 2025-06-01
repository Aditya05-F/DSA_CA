#include<stdio.h>
void insertion(int arr[],int n)
{   int s=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j>0; j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                s++;
            }
            else
            {
                break;
            }
        }
        
    }
    printf("\n%d",s);
    
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
    insertion(arr,10);
    printf("\n");
    print(arr,10);
    return 0;
}

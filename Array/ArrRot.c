#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int temp=arr[8];
    for (int i = 8; i >=0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for (size_t i = 0; i < 9; i++)
    {
        printf("\t%d",arr[i]);
    }
    
    
    return 0;
}

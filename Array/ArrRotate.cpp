#include<iostream>
#include<cstdio>
int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int temp=arr[9];
    for(int i=8;i>=0;i--)
    {
        arr[i+1]=arr[i];
      
    }
    arr[0]=temp;
    for (int i = 0; i < 10; i++)
    {
        printf("%d",arr[i]);
    }
    

    return 0;
}

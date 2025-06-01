#include <iostream>
#include<cstdio>
void seg(int arr[], int n)
{
    int count0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count0++;
    }
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count0; i < n; i++)
    {
        arr[i] = 1;
    }
}    
void seg2(int arr[],int n)
{
    int start=0,end=n-1;
    while (start<=end)
    {
        if(arr[start]==0)
        {
            start++;
        }
        else
        {
            if(arr[end]==0)
            {
                std::swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else
                end--;
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    int arr[]={1,0,1,0,1,1,1,0,0,1,0};
    seg2(arr,11);
    for (int i = 0; i < 11; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}

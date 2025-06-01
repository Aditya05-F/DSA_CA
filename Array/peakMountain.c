#include<stdio.h>
int peakEle(int arr[],int n)
{
    int left=0,right=n-1;
    while (left<=right)
    {
        int mid=right+(left-right)/2;
        if ((mid == 0 || arr[mid] > arr[mid-1]) && (mid == n-1 || arr[mid] > arr[mid+1]))
        {
            return mid;
        }
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid]>arr[mid-1])
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    
    
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7,6,5,4,3};
    int n=11;
    printf("The Index Of Peak Element Is:%3d",peakEle(arr,n));
    return 0;
}

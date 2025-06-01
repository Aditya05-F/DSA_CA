#include <stdio.h>
#include <stdlib.h>
int CorrectIndexFind(int arr[], int n,int targate)
{
    int left = 0;
    int right=n-1;
    int index = n;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= targate)
        {
            index=mid;
            right=mid-1;
        }
        else if(arr[mid]>targate)
        {
            right=mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return index;

}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,5,6,7,8,9};
    printf("The Correct Index Of the desired numbers is:%d",CorrectIndexFind(arr,8,4));
    return 0;
}

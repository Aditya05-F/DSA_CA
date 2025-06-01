#include<stdio.h>
int maxCount(int arr[], int n)
{
    int start = 0, end = n - 1;
    int index = 0, index_zero = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == 0)
        {
            index_zero = mid;
            end=mid-1;
        }
        else if (arr[mid] < 0)
        {
            index = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    int n1 = index_zero - start;
    int n2 = n - index_zero;
    return n1 > n2 ? n1 : n2;
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,23,34,32,34};
    int ans=maxCount(arr,8);
    printf("\n%d",ans);
    return 0;
}

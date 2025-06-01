#include <stdio.h>
int findTargate(int arr[], int n, int targate)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == targate)
        {
            return mid;
        }
        else if (arr[mid] >= arr[0])
        {
            if (arr[left] <= targate && arr[right] >= targate)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= targate && arr[right] >= targate)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {9, 10, 1, 2, 3, 4, 5, 6, 7, 8};
    printf("%d", findTargate(arr, 10, 3));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int arr[] = {54, 34, 887, 234, 67, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minindex = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] <= arr[minindex])
            {
                minindex = j;
            }
        }
        if (minindex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

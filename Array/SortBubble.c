#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n=8;
    int arr[]={23,5434,343,4,54,34,54,323};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j] >= arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%3d ",arr[i]);
    }
    

    return 0;
}

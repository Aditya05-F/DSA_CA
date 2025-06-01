#include <iostream>
#include <cstdio>
#include<ctime>
void bubbleSort(int arr[], int n)
{   bool swap;
    for (int i = 0; i < n; i++)
    {
        swap=false;
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap=true;
            }

        }
        if(!swap)
        {
            break;;
        }
    }
}
void printArray(int arr[], int n)
{
    printf("The Array Is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%3d", arr[i]);
    }
}
int main(int argc, char const *argv[])
{   clock_t s,e;
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubbleSort(arr,10);
    printArray(arr,10);
    return 0;
}

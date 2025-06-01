#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int min = arr[0];
    int max = arr[0];
    int max_2=0;
    int left=0,right=9,temp=0;
    while(left<right)
    {
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;right--;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }

    for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {

        if (arr[i] <= min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max_2 = max;
            max = arr[i];
        }
        else if (arr[i] > max_2 && arr[i] < max)
        {
            max_2 = arr[i];
        }
    }

    //cout << "\nMinimum " << min << "\nmaximum " << max << endl;
    printf("maximum :%3d\nminimim: %3d 2nd max: %d", max, min,max_2);
    return 0;
}
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int coin = 98;
    int c[20];
    int j = 0;
    for (int i = 0; i < 9; i++)
    {
        while (coin >= arr[i])
        {
            coin -= arr[i];
            c[j++] = arr[i];
            if (coin == 0)
            {
                break;
            }
        }
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d\t",c[i]);
    }
    

    return 0;
}

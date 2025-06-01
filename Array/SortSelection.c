#include <stdlib.h>
#include <stdio.h>
int main()
{
    int a;
    printf("Enter The Size Of Array:");
    scanf("%d", &a);
    int *arr = (int *)malloc(a * sizeof(int));
    for (int i = 0; i < a; i++)
    {
        printf("Enter The %d Element Of The Array:", i + 1);
        scanf("%d", (arr + i));
    }
   
    int min_index = 0;
    int j;
    for (int i = 0; i < a; i++)
    {
        min_index = i;
        for (j = i + 1; j < a; j++)
        {
            if (*(arr + j) < *(arr + min_index))
            {
                min_index = j;
            }
        }
        int temp = *(arr + i);
        *(arr + i) = *(arr + min_index);
        *(arr + min_index) = temp;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}
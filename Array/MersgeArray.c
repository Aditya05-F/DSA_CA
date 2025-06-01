#include<stdlib.h>
#include <stdio.h>
int* mergearray(int arr1[],int n1,int arr2[],int n2)
{
    int *arr=(int *)malloc(sizeof((n1+n2)));
    int p=0,q=0,i=0;
    while (p<n1 && q<n2)
    {
        if(arr1[p]<arr2[q])
        {
                arr[i++]=arr[p];
                p++;
        }
        else
        {
            arr[i++]=arr2[q];
            q++;
        }
    }
    
    while (p<n1)
    {
        arr[i++]=arr[p];
        p++;
    }
    while (q<n2)
    {
        arr[i++]=arr[q];
        q++;
    }
    
    return arr;

}
int main(int argc, char const *argv[])
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int *arr=mergearray(arr1,5,arr2,5);
    for (int i = 0; i <10; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}

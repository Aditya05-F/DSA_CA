#include <iostream>
#include <vector>
using namespace std;
vector<int> twosum(int arr[], int n, int sum)
{
    int start = 0, end = n - 1;
    vector<int> v;
    while (start < end)
    {
        int current_sum = arr[start] + arr[end];
        if (current_sum == sum)
        {
            v.push_back(start);
            v.push_back(end);
            return v;
        }
        else if (current_sum >= sum)
        {
            end--;
        }
        else if (current_sum <= sum)
        {
            start++;
        }
    }
    return {};
}
int main(int argc, char const *argv[])
{
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v = twosum(arr, 5,34);
    for (int i = 0; i < v.size(); i++)
    {
        printf("%d\t",v[i]);
    }
    

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
vector<int> twoDiff(int arr[], int n, int dTarget)
{
    int start = 0, end = 1;
    vector<int> v;
    while (end < n)
    {
        int current_diff = arr[end] - arr[start];
        if (current_diff == dTarget)
        {
            v.push_back(start);
            v.push_back(end);
            return v;
        }
        else if (current_diff < dTarget)
        {
            end++;
        }
        else
        {
            start;
        }
    }
    return {};
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v = twoDiff(arr, 10,4);
    for(auto i:v)
    {
        cout<<i<<"\t";
    }
    return 0;
}

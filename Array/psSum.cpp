#include <iostream>
#include <vector>
using namespace std;
vector<int> prefixSum(int arr[], int n)
{
    vector<int> v(1);
    v[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        v.push_back(v[i - 1] + arr[i]);
    }
    return v;
}
vector<int> suffixSum(int arr[], int n)
{
    vector<int> v(1);
    v[0] = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        v.push_back(v[i-1] + arr[n-i-1]);
    }
    return v;
}
void print(vector<int>v)
{
    for(const auto& val : v)
    {
        cout << val << "\t";
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    vector<int>p=prefixSum(arr,6);
    print(p);
    vector<int>s=suffixSum(arr,6);
    print(s);
    return 0;
}

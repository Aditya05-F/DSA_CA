#include <iostream>
#include <vector>
#include <algorithm>
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
        v.push_back(v[i - 1] + arr[n - i - 1]);
    }
    return v;
}
void print(vector<int> v)
{
    for (const auto &val : v)
    {
        cout << val << "\t";
    }
    cout << endl;
}
int sub2equal(vector<int> p, vector<int> s)
{
    for (int i = 0; i < p.size() - 1; i++)
    {
        if (p[i] == s[i + 1])
        {
            cout << "Equal sum found between prefix[0..." << i << "] and suffix[" << i + 1 << "...n-1]" << endl;
            return 1;
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int arr[] = {3, 4, -2, 5, 8, 20, -10, 8};
    vector<int> p = prefixSum(arr, 8);
    print(p);
    vector<int> s = suffixSum(arr, 8);
    print(s);
    reverse(s.begin(), s.end());
    print(s);
    if (sub2equal(p, s))
    {
        cout << "\n";
    }
    else
    {
        cout << "Not Possible";
    }
    return 0;
}

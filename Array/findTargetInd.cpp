#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findFirst(vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1, res = -1;
    while (start <= end) {
        int mid = start + (end - start)/2;
        if (arr[mid] == target) {
            res = mid;
            end = mid - 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return res;
}

int findLast(vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1, res = -1;
    while (start <= end) {
        int mid = start + (end - start)/2;
        if (arr[mid] == target) {
            res = mid;
            start = mid + 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return res;
}

vector<int> findAllIndices(vector<int> arr, int target) {
    sort(arr.begin(), arr.end()); // Ensure array is sorted
    int first = findFirst(arr, target);
    int last = findLast(arr, target);

    vector<int> result;
    if (first == -1) return result;

    for (int i = first; i <= last; ++i) {
        result.push_back(i);
    }
    return result;
}

int main() {
    vector<int> u = {4, 3, 56, 34, 56, 2, 8};
    vector<int> v = findAllIndices(u, 56);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}

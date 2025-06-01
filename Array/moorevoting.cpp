#include <iostream>
#include <vector>
using namespace std;

// Function to find the majority element using Moore's Voting Algorithm
int findMajorityElement(const vector<int>& nums) {
    int count = 0, candidate = -1;

    // Phase 1: Find a candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate) count++;
    }
    if (count > nums.size() / 2)
        return candidate;
    else
        return -1; // No majority element
}

int main() {
    vector<int> nums;
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> x;
        nums.push_back(x);
    }
    int result = findMajorityElement(nums);
    if (result != -1)
        cout << "Majority element is: " << result << endl;
    else
        cout << "No majority element found." << endl;
    return 0;
}
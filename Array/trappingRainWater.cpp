#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int> &height)
{
    int left = 0, right = height.size() - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;

    while (left < right)
    {
        if (height[left] < height[right])
        {
            if (height[left] >= leftMax)
                leftMax = height[left];
            else
                water += leftMax - height[left];
            left++;
        }
        else
        {
            if (height[right] >= rightMax)
                rightMax = height[right];
            else
                water += rightMax - height[right];
            right--;
        }
    }

    return water;
}

int main()
{
    vector<int> height = {4,2,0,5,2,6,2,3};
    cout << "Trapped water: " << trap(height) << endl;
    return 0;
}

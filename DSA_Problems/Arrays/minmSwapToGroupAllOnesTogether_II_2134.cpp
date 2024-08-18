#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(const vector<int>& v) {
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

int minSwaps(vector<int>& nums) {
    int n = nums.size();
    int totalOnes = count(nums.begin(), nums.end(), 1);

    // Edge case: if there are no 1's or all are 1's
    if (totalOnes == 0 || totalOnes == n) return 0;

    // Create the circular array by appending the array to itself
    nums.insert(nums.end(), nums.begin(), nums.end());
    printVector(nums);

    // Initial number of 1's in the first window
    int maxOnesInWindow = 0;
    for (int i = 0; i < totalOnes; ++i) {
        if (nums[i] == 1) ++maxOnesInWindow;
    }
    cout << maxOnesInWindow << " ";

    // Sliding window to find the maximum number of 1's in any window of size totalOnes
    int currentOnesInWindow = maxOnesInWindow;
    for (int i = totalOnes; i < 2 * n; ++i) {
        if (nums[i] == 1) ++currentOnesInWindow;
        if (nums[i - totalOnes] == 1) --currentOnesInWindow;
        maxOnesInWindow = max(maxOnesInWindow, currentOnesInWindow);
    }

    // The minimum swaps needed is the size of the window minus the maximum number of 1's in that window
    return totalOnes - maxOnesInWindow;
}

int main() {
    vector<int> nums1 = {0, 1, 0, 1, 1, 0, 0};
    vector<int> nums2 = {0, 1, 1, 1, 0, 0, 1, 1, 0};
    vector<int> nums3 = {1, 1, 0, 0, 1};

    // cout << minSwaps(nums1) << endl; // Output: 1
    // cout << minSwaps(nums2) << endl; // Output: 2
    cout << minSwaps(nums3) << endl; // Output: 0

    return 0;
}

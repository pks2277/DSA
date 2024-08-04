class Solution {
public:
    int minSwaps(vector<int>& nums) {
    int n = nums.size();
    int totalOnes = count(nums.begin(), nums.end(), 1);
    
    if (totalOnes == 0 || totalOnes == n) return 0;

    // Create the circular array by appending the array to itself
    nums.insert(nums.end(), nums.begin(), nums.end());

    // Initial number of 1's in the first window
    int maxOnesInWindow = 0;
    for (int i = 0; i < totalOnes; ++i) {
        if (nums[i] == 1) ++maxOnesInWindow;
    }

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
};
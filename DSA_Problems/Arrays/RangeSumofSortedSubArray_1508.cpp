#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int rangeSum(vector<int>& nums, int n, int left, int right) {
    vector<int> subarraySums;
    
    // Compute all subarray sums
    for(int i = 0; i < n; i++) {
        int currentSum = 0;
        for(int j = i; j < n; j++) {
            currentSum += nums[j];
            subarraySums.push_back(currentSum);
        }
    }

    // Sort the subarray sums
    sort(subarraySums.begin(), subarraySums.end());

    // Calculate the sum of the elements from index left to right
    int MOD = 1e9 + 7;
    long long result = 0;
    for(int i = left - 1; i < right; i++) {
        result = (result + subarraySums[i]) % MOD;
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    int left = 1;
    int right = 4;
    
    int result = rangeSum(nums, n, left, right);
    cout << "The sum of the numbers from index " << left << " to index " << right << " is: " << result << endl;
    
    return 0;
}

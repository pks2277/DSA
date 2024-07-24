#include <iostream>
#include <vector>
using namespace std;

int missingNumber(int nums[], int n) {
    int i = 0;
    while (i < n) {
        int correct = nums[i];
        if (nums[i] < n && nums[i] != nums[correct]) {
            swap(nums[i], nums[correct]);
        } else {
            i++;
        }
    }
    // Search for the Missing Number
    for (int index = 0; index < n; index++) {
        if (nums[index] != index) {
            return index;
        }
    }
    // if the last number (n) is missing
    return n;
}

int missingNumber1(vector<int>& nums) {
    int ans = nums.size();
    for (int i = 0; i < nums.size(); i++) {
        ans ^= nums[i] ^ i;
    }
    return ans;
}
int missingNumber2(int nums[],int n){
    int arrSum=0;
    int accSum=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        arrSum += nums[i];
    }
    return accSum-arrSum;
    
}
int main() {
    int nums[] = {3, 0, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "Missing number using Cyclic Sort: " << missingNumber2(nums, n) << endl;
    
    vector<int> nums_vec = {3, 0, 1};
    cout << "Missing number using Bit Manipulation: " << missingNumber1(nums_vec) << endl;
    
    return 0;
}

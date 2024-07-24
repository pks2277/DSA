
#include <iostream>
#include <vector>
using namespace std;


    vector<int> rearrangeArray(vector<int>& nums) {
        // Method 2. Two pointer
        vector<int> ans(nums.size(), -1);
        int odd = 1, even = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            if (num > 0) {
                ans[even] = num;
                even += 2;
            } else {
                ans[odd] = num;
                odd += 2;
            }
        }
        return ans;
    }

int main() {
    vector<int> nums = {28, -41, 22, -8, -37, 46, 35, -9, 18, -6, 19, -26, -37, -10, -9, 15, 14, 31};
    vector<int> result = rearrangeArray(nums);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

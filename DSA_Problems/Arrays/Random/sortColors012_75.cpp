#include<iostream>
#include<algorithm>
using namespace std;

void sortColors(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        int left=0;
        int right=n-1;

        while(index<=right){
            if(nums[index]==0){
                swap(nums[index],nums[left]);
                left++;
                index++;
            }
            else if(nums[index]==2){
                swap(nums[index],nums[right]);
                right--;   // no index++ becoz we dont know swap me 0 ya 1 aaya hai
            }
            else{
                index++;
            }
        }
}

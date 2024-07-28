#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int robHelper(vector<int>& nums,int i){
        if(i >=nums.size()){
            return 0;
        }

        int robamt1=nums[i]+robHelper(nums,i+2);
        int robamt2=0+robHelper(nums,i+1);

        return max(robamt1,robamt2);
    }
    int rob(vector<int>& nums) {
        return robHelper(nums,0);
    }
};

int main()
{
    
    return 0;
}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printsubseq(vector<int> &nums,int start,int end){  //T(O)=N2  S(O)=N
    if(end == nums.size())
        return;
    
    for(int i=start;i<=end;i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    printsubseq(nums,start,end+1);
}
void printAllSeq(vector<int>&nums){
    for(int start=0;start<nums.size();start++){
        int end=start;
        printsubseq(nums,start,end);
    }
}

int main()
{
    vector<int> nums={1,2,3,4,5};
    printAllSeq(nums);
    return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;

int sperateNegansPos(int nums[]){
    int l=0;
    int h=0;
    while(l<h){
        if(nums[l]<0) l++;
        else if (nums[h]>0) h++;
        else {
            int temp=nums[l];
            nums[l]=nums[h];
            nums[h]=temp;
        }
    }
    return nums;
}

int main()
{
    
    return 0;
}
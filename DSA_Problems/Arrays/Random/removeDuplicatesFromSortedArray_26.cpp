#include<iostream>
#include<algorithm>
using namespace std;
int removeDuplicates(int nums[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(j==0 || nums[j] != nums[j-1]){ 
            nums[i++]=nums[j];
        }
    }
    return i;
}

int main()
{
    int nums[]={0,0,1,1,1,2,2,3,3,4};
    int n=10;
    cout << removeDuplicates(nums,n);
    
    return 0;
}
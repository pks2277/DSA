#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



class Solution {
public:
    void merge(vector<int>&v, vector<int>&temp, int start, int mid, int end){
        int i = start, j = mid + 1;
        // first array = start -> mid
        // second array = mid + 1 -> end
        // merged array => start -> end
        int k = start;

        while(i <= mid && j <= end){
            if(v[i] <= v[j])
                temp[k++] = v[i++];
            else
                temp[k++] = v[j++];
        }

        // handle remaining elements in case of diff array size
        while(i <= mid)
            temp[k++] = v[i++];

         while(j <= end)
            temp[k++] = v[j++];

        // let;s copy merged data
        while(start <= end){
            v[start] = temp[start];
            start++;
        }
    }

    void mergeInPlace(vector<int>&v,int start,int end){
        int total_len=end-start+1;
        int gap=total_len/2+total_len%2;
        while(gap>0){
            int i=start,j=start+gap;
            while(j<=end){
                if(v[i]>v[j]){
                    swap(v[i],v[j]);
                }
                i++,j++;
            }
            gap=gap <= 1 ?0:(gap/2) +(gap%2);
        }
    }

    void mergeSort(vector<int>&v, vector<int>&temp, int start, int end){
        if(start >= end) return;

        int mid = (start + end) / 2;
        // divide
        mergeSort(v, temp, start, mid);
        mergeSort(v, temp, mid + 1, end);

        // conqour
        // merge(v, temp, start, mid, end);
        mergeInPlace(v,start,end);
    }

    vector<int> sortArray(vector<int>& nums) {
        vector<int>temp(nums.size(), 0);
        mergeSort(nums, temp, 0, nums.size() - 1);
        return nums;
    }
};
int main() {
    Solution solution;
    vector<int> nums = {5, 2, 3, 1};
    vector<int> sorted_nums = solution.sortArray(nums);

    for (int num : sorted_nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
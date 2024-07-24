#include<iostream>
#include<algorithm>
using namespace std;
void reverseVector(vector<int>& arr){
    int n=arr.size();
    int start=0;
    int end=n-1;

    while(start<end){
        swap(arr[start++],arr[end--]);
    }
}

void rotate(vector<vector<int>>& matrix) {
        
        int n=matrix.size();

        // transpose
        for(int i=0;i<n;i++){
            for(int j=i;j<matrix[i].size();j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }

        // reverse each row of 2-D matrix
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
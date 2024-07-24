#include<iostream>
#include<algorithm>
using namespace std;

bool hasArrayTwoCandidates(vector<int>& arr, int x) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int l=0;
        int h=n-1;
        while(l<h){
            int csum=arr[l]+arr[h];
            if(csum==x) return true;
            else if (csum>x) h--;
            else l++;
        }
        return false;
    }
int main()
{
    
    return 0;
}
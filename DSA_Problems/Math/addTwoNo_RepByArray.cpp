#include<iostream>
#include<algorithm>
using namespace std;


class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
    int carry=0;
    string ans;
    int i=n-1;
    int j=m-1;
    while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--];
            if (j >= 0) sum += b[j--];
            ans.push_back(sum % 10 + '0');
            carry = sum / 10;
        }

        //remove 0 from last
        while(ans[ans.size()-1]=='0'){
            ans.pop_back();
        }
        // reverse the ans to get the original ans
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
    
    return 0;
}
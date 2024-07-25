#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
static bool mycomp(string a , string b){
     return a+b>b+a;
}
    string largestNumber(vector<int>& nums) {
        vector<string> snums;
        for(auto n:nums){
            snums.push_back(to_string(n));
        }      
        sort(snums.begin(),snums.end(),mycomp);
        if(snums[0]=="0") return "0";

        string ans="";
        for(auto str:snums){
            ans+=str;
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;


vector<vector<string>> groupAnagrams(vector<string> &strs){
    map<string,vector<string>> mp;
    for(auto str:strs){
        string s=str;
        sort(s.begin(),s.end());
        mp[s].push_back(str);
    }
    vector<vector<strings>> ans;
    for(auto it=mp.begin(); it !=map.end();it++){
        ans.push_back(it->seconnd);
    }
}

int main()
{
    
    return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;

void lastOcc(string &s,char x,int i,int &ans){
    if(i<=0){
        return;
    }
    if(s[i]==x){
        ans=i;
        return;
    }
    lastOcc(s,x,i+1,ans);
}

int main()
{    
    return 0;
}
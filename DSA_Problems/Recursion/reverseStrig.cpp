#include<iostream>
#include<algorithm>
using namespace std;


void revString(string&s,int start,int end){
    if(start>=end)
        return;
    swap(s[start],s[end]);

    revString(s,start+1,end-1);
}
int main()
{
    string s;
    cin >>s;
    revString(s,0,s.size()-1);
    cout << s;
    
    return 0;
}
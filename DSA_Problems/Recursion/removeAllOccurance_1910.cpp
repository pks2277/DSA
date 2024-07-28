#include<iostream>
#include<algorithm>
using namespace std;

void removeOccrance(string &s,string &part){
    int found=s.find(part);
    if(found != string::npos){
        string left_part=s.substr(0,found);
        string right_part=s.substr(found+part.size(),s.size())
        s=left_part+ right_part;

        removeOccrance(s,part);
    }
    else{
        return;
    }
}

int main()
{
    
    return 0;
}
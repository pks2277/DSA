class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0;i<details.size();i++){
            string r = details[i].substr(11,2);
            int temp=stoi(r);
            if(temp>60){
                ans=ans+1;
            }
        }
        return ans;
    }
};
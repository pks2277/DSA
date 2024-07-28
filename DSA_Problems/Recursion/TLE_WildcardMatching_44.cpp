class Solution {
public:
    bool isMatchHelper(string&s,int si,string&p,int pi){


        if(si==s.size() && pi==p.size())
            return true;     // poora iterate k baad same hai sub
        
        if (si==s.size() && pi<p.size()){     // agar s khatam hai lakin p me bacha hua hai tooh bas p me *** ho sakta hai
            while(pi<p.size()){
                if(p[pi] != '*') return false;
            }
            return true;
        }


        if(s[si]==p[pi] || '?'==p[pi]){
            return isMatchHelper(s,si+1,p,pi+1);
        }
        if(p[pi]=='*'){
            // treat * as empty or null
            bool caseA= isMatchHelper(s,si+1,p,pi+1);

            // let  * consume one char
            bool caseB=isMatchHelper(s,si+1,p,pi);  

            return caseA || caseB;
        }

        return false;

    }
    bool isMatch(string s, string p) {
        int si=0;
        int pi=0;

        return isMatchHelper(s,si,p,pi);
        
    }
};
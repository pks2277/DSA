#include <iostream>
#include <string>
#include <vector>
using namespace std;

    class Solution {
    public:
        string removeDuplicates(string s, int k) {
            vector<int> count(s.size(), 0); // To keep track of character counts
            
            for (int i = 0; i < s.size(); ++i) {
                if (i == 0 || s[i] != s[i - 1]) {
                    count[i] = 1;
                } else {
                    count[i] = count[i - 1] + 1;
                    
                    if (count[i] == k) {
                        s.erase(i - k + 1, k);
                        i = i - k; // Move the index back to re-check from this point
                    }
                }
            }
            
            return s;
        }
    };

int main() {
    Solution sol;
    string s = "deeedbbcccbdaa";
    int k = 3;
    cout << sol.removeDuplicates(s, k) << endl; // Output should be "aa"
    return 0;
}

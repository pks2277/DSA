
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            hash[s[i] - 'a']++;
        }

        // Find the character with the maximum frequency
        char max_freq_char;
        int max_freq = 0;
        for (int i = 0; i < 26; i++) {
            if (hash[i] > max_freq) {
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        }

        // Place the most frequent character at every other position
        int index = 0;
        while (max_freq > 0 && index < s.size()) {
            s[index] = max_freq_char;
            max_freq--;
            index += 2;
        }

        // If we still have the most frequent character left, return an empty string
        if (max_freq != 0) return "";

        hash[max_freq_char - 'a']=0;

        // Place the rest of the characters
        for (int i = 0; i < 26; i++) {
            while (hash[i] > 0) {
                if (index >= s.size()) index = 1; // Move to odd positions if even positions are filled
                s[index] = i + 'a';
                hash[i]--;
                index += 2;
            }
        }

        return s;
    }
};

int main() {
    Solution sol;
    string s = "vvlov";
    cout << sol.reorganizeString(s) << endl; // Example usage
    return 0;
}

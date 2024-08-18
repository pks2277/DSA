#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


    int countSwaps(const string& s, char first) {
    int swaps = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != first) swaps++;
        first = (first == '0') ? '1' : '0';
    }
    return swaps / 2;
}
int minSwaps(string s) {
    int count0 = count(s.begin(), s.end(), '0');
    int count1 = s.length() - count0;

    if (abs(count0 - count1) > 1) return -1;

    // Calculate swaps for the two possible patterns
    if (count0 == count1) {
        return min(countSwaps(s,'0'), countSwaps(s,'1'));
    } else if (count0 > count1) {
        return countSwaps(s,'0');
    } else {
        return countSwaps(s,'1');
    }
}

int main() {
    string s1 = "111000"; // Output: 1
    string s2 = "010";    // Output: 0
    string s3 = "1110";   // Output: -1

    cout << minSwaps(s1) << endl; 
    cout << minSwaps(s2) << endl; 
    cout << minSwaps(s3) << endl;

    return 0;
}

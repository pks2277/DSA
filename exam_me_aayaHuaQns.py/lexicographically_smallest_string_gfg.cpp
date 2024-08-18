// #include<iostream>
// #include<algorithm>
// using namespace std;
// bool isPowerOfTwo(int n) {
//         return n > 0 && (n & (n - 1)) == 0;
//     }
// string smallest(string s,int k){
//     int n=s.size();
//     if(isPowerOfTwo(n)){
//         k=k/2;
//     }
//     else{
//         k=k*2;
//     }
//     sort(s.begin(),s.end());
    
// }
// int main()
// {
//     string s="fooland";
//     int k=2;
//     cout << s.size();
//     sort(s.begin(),s.end());
//     cout << s;
    
//     return 0;
// }


#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

// Function to check if a number is a power of 2
bool isPowerOfTwo(int n) {
    return (n > 0) && (n & (n - 1)) == 0;
}

string lexicographicallySmallestString(string S, int k) {
    int n = S.length();

    // Correct the value of k
    if (isPowerOfTwo(n)) {
        k /= 2;
    } else {
        k *= 2;
    }

    // If k is invalid, return -1
    if (k >= n || k < 0) {
        return "-1";
    }

    // Use a deque to find the lexicographically smallest string
    deque<char> dq;
    int toRemove = k;

    for (char c : S) {
        while (!dq.empty() && dq.back() > c && toRemove > 0) {
            dq.pop_back();
            toRemove--;
        }
        dq.push_back(c);
    }

    // Remove any remaining characters
    while (toRemove > 0) {
        dq.pop_back();
        toRemove--;
    }

    // Build the final string from the deque
    string result(dq.begin(), dq.end());

    // If the result is empty, return -1
    if (result.empty()) {
        return "-1";
    }

    return result;
}

int main() {
    string S = "fooland";
    int k = 2;
    cout << lexicographicallySmallestString(S, k) << endl;

    S = "code";
    k = 4;
    cout << lexicographicallySmallestString(S, k) << endl;

    return 0;
}

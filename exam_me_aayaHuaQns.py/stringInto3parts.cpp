#include <iostream>
#include <string>
using namespace std;

int maxLengthOfThreeParts(string s) {
    int count_zeros = 0;
    int count_ones = 0;

    // Count total number of '0's and '1's
    for (char c : s) {
        if (c == '0') {
            count_zeros++;
        } else if (c == '1') {
            count_ones++;
        }
    }

    // Initialize the max length to 0
    int max_length = 0;

    // Traverse the string to determine the max length
    int current_zeros = 0;
    for (char c : s) {
        if (c == '0') {
            current_zeros++;
        } else {
            // Calculate the maximum length considering the current split point
            int current_length = current_zeros + count_ones + (count_zeros - current_zeros);
            max_length = max(max_length, current_length);
            count_ones--; // Move one '1' to the second part
        }
    }

    return max_length;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int result = maxLengthOfThreeParts(s);
    cout << "The maximum length of the string after division is: " << result << endl;
    return 0;
}

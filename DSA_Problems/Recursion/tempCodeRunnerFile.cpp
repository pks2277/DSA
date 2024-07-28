
    }
    int rob(vector<int>& nums) {
        return robHelper(nums,0);
    }
};

int main() {
    Solution solution;
    int num = 1994;
    string roman = solution.intToRoman(num);
    cout << "The Roman numeral for " << num << " is " << roman << endl;
    return 0;
}
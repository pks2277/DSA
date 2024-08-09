class Solution {
public:
    int isValid(string str) {
        return isValidIPv4Address(str);
    }
    
    bool isValidPart(const string &part) {
        // Check if the part is empty or has leading zeros
        if (part.empty() || (part[0] == '0' && part.length() > 1)) {
            return false;
        }
        // Convert the part to an integer
        int num = 0;
        try {
            num = stoi(part);
        } catch (...) {
            return false;
        }
        // Check if the number is within the range 0 to 255
        return num >= 0 && num <= 255;
    }

    bool isValidIPv4Address(const string &str) {
        stringstream ss(str);
        string part;
        vector<string> parts;

        // Split the input string by '.'
        while (getline(ss, part, '.')) {
            parts.push_back(part);
        }

        // Check if there are exactly four parts
        if (parts.size() != 4) {
            return false;
        }

        // Validate each part
        for (const string &part : parts) {
            if (!isValidPart(part)) {
                return false;
            }
        }

        return true;
    }
};
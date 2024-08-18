#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        long ans = 0;
        int max, rindex = -1, cindex = -1, rprevIndex = -1, cprevIndex = -1;

        for (int i = 0; i < points.size(); i++) {
            max = INT_MIN;
            for (int j = 0; j < points[i].size(); j++) {
                if (max <= points[i][j]) {
                    max = points[i][j];
                    rindex = i;
                    cindex = j;
                }
            }
            cout << cindex<<" "<< rindex<< " "<< max<< endl;
            ans += max;
            if (rprevIndex != -1 && (rindex == rprevIndex + 1 || rprevIndex == rindex + 1)) {
                ans -= abs(cindex - cprevIndex);
            }
            rprevIndex = rindex;
            cprevIndex = cindex;
        }
        return ans;
    }
};

int main() {
    vector<vector<int>> points = {
        {0, 3, 0, 4, 2},
        {5, 4, 2, 4, 1},
        {5, 0, 0, 5, 1},
        {2, 0, 1, 0, 3}
    };

    Solution sol;
    long long result = sol.maxPoints(points);
    cout << "Maximum points: " << result << endl;

    return 0;
}

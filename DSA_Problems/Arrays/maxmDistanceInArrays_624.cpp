#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>

int main()
{
    vector<vector<int>> jaggedArray={{1,2,3},{4,5,6},{1,2,3,4}};
    for(int i=0;i<)or (int i = 0; i < jaggedArray.size(); ++i) {
        for (int j = 0; j < jaggedArray[i].size(); ++j) {
            int value = jaggedArray[i][j];

            // Update min and 2nd min
            if (value < firstMin.value) {
                secondMin = firstMin;
                firstMin = {value, i, j};
            } else if (value < secondMin.value && value != firstMin.value) {
                secondMin = {value, i, j};
            }

            // Update max and 2nd max
            if (value > firstMax.value) {
                secondMax = firstMax;
                firstMax = {value, i, j};
            } else if (value > secondMax.value && value != firstMax.value) {
                secondMax = {value, i, j};
            }
        }
    }

    // If second min or second max is not found, return an error indicator
    if (secondMin.arrayIndex == -1 || secondMax.arrayIndex == -1) {
        return {{-1, -1, -1}, {-1, -1, -1}};
    }
    return 0;
}
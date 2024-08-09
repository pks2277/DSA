#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>

class Solution {
public:
    bool isMagicSquare(vector<vector<int>>& grid, int row, int col) {
        int sum = grid[row][col] + grid[row][col + 1] + grid[row][col + 2];
        
        // Check rows
        for (int i = 0; i < 3; i++) {
            if (grid[row + i][col] + grid[row + i][col + 1] + grid[row + i][col + 2] != sum) 
                return false;
        }
        
        // Check columns
        for (int j = 0; j < 3; j++) {
            if (grid[row][col + j] + grid[row + 1][col + j] + grid[row + 2][col + j] != sum) 
                return false;
        }
        
        // Check diagonals
        if (grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2] != sum) 
            return false;
        if (grid[row][col + 2] + grid[row + 1][col + 1] + grid[row + 2][col] != sum) 
            return false;

        // Check if all numbers are distinct and in the range 1-9
        vector<int> freq(10, 0);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int num = grid[row + i][col + j];
                if (num < 1 || num > 9 || freq[num] > 0)
                    return false;
                freq[num]++;
            }
        }

        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        for (int i = 0; i <= rows - 3; i++) {
            for (int j = 0; j <= cols - 3; j++) {
                if (isMagicSquare(grid, i, j)) {
                    count++;
                }
            }
        }

        return count;
    }
};
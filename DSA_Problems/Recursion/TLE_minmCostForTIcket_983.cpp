#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int mincostTickets_helper(vector<int>& days, vector<int>& costs, int i) {
        // Base case: if all travel days are covered
        if (i >= days.size()) return 0;

        // Cost of taking a 1-day pass for the i-th day
        int cost1 = costs[0] + mincostTickets_helper(days, costs, i + 1);
        
        // Cost of taking a 7-day pass for the i-th day
        int passEndDay = days[i] + 7 - 1;
        int j = i;
        while (j < days.size() && days[j] <= passEndDay) {
            j++;
        }
        int cost7 = costs[1] + mincostTickets_helper(days, costs, j);

        // Cost of taking a 30-day pass for the i-th day
        passEndDay = days[i] + 30 - 1;
        j = i;
        while (j < days.size() && days[j] <= passEndDay) {
            j++;
        }
        int cost30 = costs[2] + mincostTickets_helper(days, costs, j);

        // Return the minimum cost among the three options
        return min(cost1, min(cost7, cost30));
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return mincostTickets_helper(days, costs, 0);
    }
};


int main()
{
    
    return 0;
}
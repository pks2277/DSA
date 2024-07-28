#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void maxProfitFinder(vector<int> &prices, int i, int &minPrice, int &maxProfit) {
    if (i == prices.size()) return;

    if (prices[i] < minPrice) minPrice = prices[i];
    int todayProfit = prices[i] - minPrice;
    if (todayProfit > maxProfit) maxProfit = todayProfit;

    maxProfitFinder(prices, i + 1, minPrice, maxProfit);
}

int main() {
    int minPrice = INT_MAX;
    int maxProfit = 0; 

    vector<int> prices = {7, 1, 5, 3, 6, 4};
    maxProfitFinder(prices, 0, minPrice, maxProfit);

    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}

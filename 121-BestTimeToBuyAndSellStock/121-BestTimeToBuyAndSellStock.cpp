// Last updated: 08/05/2026, 09:32:08
class Solution {
public:
    int maxProfit(vector<int>& prices) {
                int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            // Update minPrice if the current price is lower
            minPrice = std::min(minPrice, price);

            // Calculate profit if sold at current price and update maxProfit if it's higher
            maxProfit = std::max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};
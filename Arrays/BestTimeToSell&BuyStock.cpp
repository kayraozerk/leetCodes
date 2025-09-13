/*
13.09.2025 Tankut Kayra Özerk



Even though this is a valid solution, due to it's O(n^2) time complexity it exceeds the time limit in LeetCode, more efficient solution is below


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy,sell,profit = 0;

        for(int i = 0; i < prices.size(); i++){
            buy = prices[i];
            for(int j = i + 1; j < prices.size(); j++){
                sell = prices[j];
                if(sell - buy > profit){
                    profit = sell - buy;
                }

            }
        }
        return profit;

    }
};

*/


//Time: O(n)
//Space: O(1)

#include <iostream>
#include <vector>

using namespace std;



class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min_price = INT_MAX;
        int max_profit = 0;

        for(int price : prices){
            min_price = min(min_price, price);
            max_profit = max(max_profit, price - min_price);
        }
        return max_profit;
        
    }
};
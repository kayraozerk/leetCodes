#include <iostream>
#include <vector>
using namespace std;

/*
13.09.2025
Tankut Kayra Özerk

Time: O(n)

*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for(int i = 0; i < nums.size() ; i++){
            num  = num ^ nums[i];
        }
        return num;
        
    }
};
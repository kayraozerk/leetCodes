//11.09.2025 Tankut Kayra Özerk, first submission

#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int num1, minusTarget;
        int vectorSize = nums.size();
        vector<int> output = {};
        for(int i = 0; i < vectorSize; i++){
            num1 = nums[i];
            minusTarget = target - num1;
            for(int j = 0; j < vectorSize; j++){
                if(i != j){
                    if(nums[j] == minusTarget){
                    output.push_back(i);
                    output.push_back(j);
                    
                }
                }
            }
            if(output.size() != 0){
                break;
            }
        }
        return output;
    }
};
//11.09.2025 Tankut Kayra Özerk
#include <iostream>
#include <vector>
using namespace std;


/*
This solution has
Time: O(n*n)
Space: O(1);
*/
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

/*
Second Solution
Time: O(n)
Space: O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i = 0 ; i < nums.size(); i++){
            hash[nums[i]] = i;
        }
        for(int i = 0; i <nums.size(); i++){
            int x = target- nums[i];
            if(hash.find(x) != hash.end()&& hash[x] != i){
                return {i, hash[x]};
            }
        }
        return {};
    }
};
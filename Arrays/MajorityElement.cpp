/*
13.09.2025 Tankut Kayra Özerk
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int count;

        for(int i = 0; i < size; i++){
            count = 0;

            for(int j = 0; j < size; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
                if(count > size/2){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};
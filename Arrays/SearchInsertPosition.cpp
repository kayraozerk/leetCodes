#include <iostream>
#include <vector>

using namespace std;


/*

12.09.2025
Time: O(logn)
Space: O(1)

*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() -1;
        int mid;
        while(low <= high){
            mid = low + (high - low) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        if(nums[mid]< target){
            return mid + 1;
        }
        if(nums[mid] > target){
            if(mid != 0){
                return mid;
            }
       
        }
    return mid;
    }
};
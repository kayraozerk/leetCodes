/*
13.09.2025 Tankut Kayra Özerk

Time: O(logn)
*/

#include <iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long int min = 0, max = x;
        while(min <= max){
            long int mean = (max + min) / 2;
            if(mean * mean == x){
                return mean;
            }
            else if(mean * mean < x){
                min = mean + 1;
            }
            else{
                max = mean -1;
            }
            
        }
        return max;
    }
};
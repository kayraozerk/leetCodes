/*
13.09.2025 Tankut Kayra Özerk
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(),strs.end());
        string str1 = strs[0];
        string str2 = strs[strs.size() -1];
        int idx = 0;

        while(idx < str1.length() && idx < str2.length()){
            if(str1[idx] == str2[idx]){
                idx++;
            }else{
                break;
            }
        }
        
        string a = str1.substr(0,idx);
         return a;
        
       
    }
};
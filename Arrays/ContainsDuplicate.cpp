// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

//solved using a hashmap

#include <unordered_map>
#include <vector>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> map;

        for(int i = 0; i < nums.size(); ++i){
            map[nums[i]]++;
        }

        for (auto i : map){
            if (i.second > 1){
                return true;
            }
        }

        return false;
    }
};

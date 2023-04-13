// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.



#include <unordered_map>
#include <vector>

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        std::vector<int> missing;
        std::unordered_map<int,int> map;
        for(int i = 0; i < nums.size(); ++i){
         map[nums[i]]++;  // insert all elements into the hashmap
        }

        for (int i = 1; i < nums.size()+1; ++i){
            if (map.find(i) == map.end()){
                missing.push_back(i);  // if a number between 1 and n is not in the array, push it onto the vector that we'll return
            }

        }

        return missing;
    }
};

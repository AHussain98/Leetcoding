Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.


#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

       // we need to track indices aswell as the values themselves, a map is good for this
       // we could sort and then use a two pointer approach, this trades speed for space

        std::unordered_map<int,int> map;

       for (int i = 0; i < nums.size(); ++i){
          map[nums[i]] = i;  // insert all the elements into the map, the key being their values, not their indices
       }

      for (int i = 0; i < nums.size(); ++i){
          int complement = target - nums[i]; // find the missing amount
          if(map.find(complement) != map.end() && i != map[complement]){  // remember not to include itself
              return {map[complement],i};
          }
      }

      return {};


    }
};

// we can improve the time needed for this by combining the insertion of the elements into the map and checking for the complement in one loop

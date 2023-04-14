Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

  // my initial solution was to sort the array and check for which two consectutive elements don't match, this is constant space but nlongn time
  // could use a map to store the occurances of each element, this is n space but only n time
#include <vector>
#include <algorithm>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        if (nums.size() == 1){
            return nums[0];
        }

        std::sort(nums.begin(),nums.end());  // sorts the array in ascending order
        

        for ( int i = 0; i < nums.size(); i +=2){
            if (nums[i] != nums[i+1]){
                return nums[i];
            }
        }
       return 0;
    }
};  

// solved in linear time using an xor bitwise operation


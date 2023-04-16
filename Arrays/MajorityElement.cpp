Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.


//solved below with O(n) time and constant space, could potentially be solved faster with a hashmap, but that is with n space complexity

class Solution {
public:
    int majorityElement(vector<int>& nums) {
           // write your code in C++14 (g++ 6.2.0)
    int candidate = -1;  // initialise the candidate variable
    int size = 0;

    for(auto a : nums) { // for every element in the input array
        if(size == 0) { // if size has become 0, increase it and make the current element the candidate for leader
            size++;
            candidate = a;
        } else {
            if(candidate == a) // if size if not 0, compare the current element with the current candidate, if they're the same then increase the size
                size++;
            else
                size--; // if they're not the same, then reduce the size
        }
    }
// by the end of the above loop, we've got our best candidate for leader
    if(size > 0) // if the size variable is more than 0, we can go through the loop and count the number of occurances of the candidate for leader
    {
        int index = -1;
        size_t count = 0;
        for(size_t i=0; i<nums.size() ; i++) {
            if(nums[i] == candidate) {
                count++;
                if(index == -1) // we've found an index where candidate exists, so store this index in the variable
                    index = i;
            }
        }

        if(count > nums.size() / 2) // if the number of occurances is more than half of the total number of elements, we know this is a leader, so return the index where it exists
            return candidate;
    }
    return -1; // if size was not greater than 0, then return -1, there was no best candidate and therefore certainly no leader
} 
    
};

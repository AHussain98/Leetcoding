You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

My solution:

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

     for(int i = 0; i < n; ++i){
         nums1[m+i] = nums2[i];
     }

     std::sort(nums1.begin(),nums1.end());



    }
};

// this is O(mlogm)
// can be done faster using two pointer method

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = m + n - 1;  // i is at the end of normal nums1, j is at the end of nums2 and k is at the full end of the combined aspect of nums1
        while (i >= 0 && j >= 0) {
            if (nums1[i] < nums2[j]) 
                nums1[k--] = nums2[j--];
            else
                nums1[k--] = nums1[i--];
        } 
        while (i >= 0)  // is i is left over
            nums1[k--] = nums1[i--];
        while (j >= 0)  // if j is left over
            nums1[k--] = nums2[j--];
    }
};





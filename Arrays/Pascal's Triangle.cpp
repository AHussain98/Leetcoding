Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it


class Solution {
public:
    vector<vector<int>> generate(int numRows) {  // we're going to return a vector of vectors
        vector<vector<int>> output(numRows);
        for(int i=0; i<numRows; i++){
            output[i].resize(i+1, 1);  // increase the size of each vector in the vector of vectors by 1, and make all values 1 by default
            for(int j=1; j<i; j++){   // for so the first and second rows, the arrays are already filled in with 1's
                output[i][j] = output[i-1][j-1] + output[i-1][j];
            }  // we start at j = 1 because the first value on the end is filled in
        }
        return output;
    }
};

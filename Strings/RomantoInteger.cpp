Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.


class Solution {
public:
    int romanToInt(string s) {

// first we'll use a map to store the roman symbols and their values

std::unordered_map<char,int> map { {'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}  };

int result = map[s[s.size()-1]];  // we're going to start from the end and run through the string, adding elements into the result variable. We're going to start woth teh second to last element and compare with the last, this is why we've already got last in the result, as we have to include it regardless

if(s.size() == 1){
    return result;
}

for( int i = s.size()-2; i >= 0; --i){
    if(map[s[i]] < map[s[i+1]]){
        result -= map[s[i]];
    }
    else{
        result += map[s[i]];
    }
}

return result;
      
         }


    
};

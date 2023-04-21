Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.




class Solution {
public:
    bool isAnagram(string s, string t) {
     std::unordered_map<char,int> map;

     if( s.size() != t.size()){
         return false;
     }

     for(int i = 0; i < s.size(); ++i){
         map[s[i]]++;
     }   

     for(int i = 0; i < t.size(); ++i){
         map[t[i]]--;
         if(map[t[i]] < 0){
             return false;
         }
     }
     return true;

}};

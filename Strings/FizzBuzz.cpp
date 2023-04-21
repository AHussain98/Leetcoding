Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.


class Solution {
public:
    vector<string> fizzBuzz(int n) {
      // create the vector of size n
      std::vector<std::string> vec(n);
      for(int i = 0; i < n; ++i){
       if((i+1) % 3 == 0 && (i+1) % 5 == 0){
           vec[i] = std::string{"FizzBuzz"};
       }
       else if((i+1) % 3 == 0 ){
      vec[i] = std::string{"Fizz"};
       }
       else if((i+1) %5 == 0){
         vec[i] = std::string{"Buzz"};
       }
       else{
         vec[i] = to_string(i+1);
       }

      } 

      return vec; 
    }
};

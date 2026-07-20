class Solution {
public:
    bool divisibleBy3and5(int n){
        return (n % 3 == 0) && (n % 5 == 0);
    }
    bool divisibleBy3(int n){
        return (n % 3 == 0);
    }
    bool divisibleBy5(int n){
        return (n % 5 == 0);
    }
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i = 1; i <= n; i++) {
            if(divisibleBy3and5(i)) {
                ans.push_back("FizzBuzz");
            }
            else if(divisibleBy3(i)) {
                ans.push_back("Fizz");
            }
            else if(divisibleBy5(i)) {
                ans.push_back("Buzz");
            }
            else {
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};
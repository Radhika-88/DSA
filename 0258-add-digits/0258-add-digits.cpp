class Solution {
public:
    int sumOfDigits(int n){
        int sum = 0;
        while(n!=0){
            int lastDig = n%10;
            sum = sum+lastDig;
            n = n/10;
        }
        return sum;
    }
    int addDigits(int num) {
        int sum = 0;
        if(num < 10){
            return num;
        }
        while(num > 9 ){
            sum =  sumOfDigits(num);
            num = sum;
        }
        return sum;
    }
};
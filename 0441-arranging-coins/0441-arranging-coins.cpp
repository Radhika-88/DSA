class Solution {
public:
    int arrangeCoins(int n) {
        int num = n;
        int ans;
     for(int i = 1;i<=n;i++){
        if(num >= i){
            num = num -i;
        }
        else{
            ans = i-1;
            break;
            }
        } 
        return  ans;
    }
};
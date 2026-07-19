class Solution {
public:
    bool canWinNim(int n) {
        // as will loose game at the multiple of 4
        return n%4 != 0;
    }
};
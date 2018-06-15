class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x/10 != 0 && x%10 == 0)) return false;
        int res = 0, f = x, s = x;
        while(f){
            res = res * 10 + s % 10;
            f /= 100;
            s /= 10;
        }
        return (s == res) || (s == res/10);
    }
};

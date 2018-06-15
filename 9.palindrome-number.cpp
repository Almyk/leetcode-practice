class Solution {
public:
    bool isPalindrome(int x) {
        bool answer;
        if(x < 0) return false;
        int n = reverse(x);
        if(n==x) return true;
        return false;
    }
    int reverse(int n){
        int res = 0;
        int right = 0;
        while(n!=0){
            right = n % 10;
            res = res * 10 + right;
            n /= 10;
        }
        return res;
    }
};

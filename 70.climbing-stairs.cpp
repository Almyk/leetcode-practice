class Solution {
public:
    int climbStairs(int n) {
        int res = 3;
        int previous = 2;
        int temp;
        int i;
        if(n < 4) return n;
        for(i = n-res; i > 0; i--){
            temp = res;
            res += previous;
            previous = temp;
        }
        return res;
    }
};

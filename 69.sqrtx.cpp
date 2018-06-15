class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        if(x <= 3) return 1;

        int ans = x / 2;
        while(x / ans < ans){
            ans = (ans + x / ans) / 2;
        }
        return ans;
    }
};

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        int right = 0;
        while(x!=0){
            right = x % 10;
            int tmp = result * 10 + right;
            if(x>0 && (tmp / 10) < result) return 0;
            if(x<0 && (tmp / 10) > result) return 0;
            result = tmp;
            x /= 10;
        }
        return result;
    }
};

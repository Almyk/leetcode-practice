class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        int i;
        int add = (digits[n] + 1) / 10;
        digits[n] = (digits[n] + 1) % 10;
        while(add && n > 0){
            n--;
            add = (digits[n] + 1) / 10;
            digits[n] = (digits[n] + 1) % 10;
        }
        if(add){
            digits.insert(digits.begin(), 1);
        }
        
        return digits;
    }
};

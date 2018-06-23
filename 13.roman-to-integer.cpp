class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romanTable = { { 'I' , 1 },
                                      { 'V' , 5 },
                                      { 'X' , 10 },
                                      { 'L' , 50 },
                                      { 'C' , 100 },
                                      { 'D' , 500 },
                                      { 'M' , 1000 }
        };
        int res = romanTable[s.back()]; // initialize result with last value
        int i;
        for(i = s.size() - 2; i >= 0; i--){ // iterate from end of string
            if(romanTable[s[i]] < romanTable[s[i+1]])
                res -= romanTable[s[i]];
            else res += romanTable[s[i]];
        }
        return res;
    }
};

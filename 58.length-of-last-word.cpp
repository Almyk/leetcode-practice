class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = 0;
        int len = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' ') len++;
            else if(len != 0){
                last = len;
                len = 0;
            }
        }
        if(len != 0) last = len;
        return last;
        
    }
};

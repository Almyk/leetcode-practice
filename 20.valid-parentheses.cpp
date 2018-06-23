class Solution {
public:
    bool isValid(string s) {
        if(!s.size()) return true;
        stack<char> stacky;

        map<char, char> T = { { '(', ')' },
                              { '[', ']' },
                              { '{', '}' } };

        for(int i = 0; i < s.size(); i++){
            switch(s[i]){
                case '(': 
                case '[':
                case '{': stacky.push(s[i]); break;
                default: if(stacky.empty() || T[stacky.top()] != s[i]) return false;
                         stacky.pop(); 
                         break;
            }
        }
        
        if(!stacky.empty()) return false;
        return true;
    }
};

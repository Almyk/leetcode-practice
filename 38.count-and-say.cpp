class Solution {
public:
    string countAndSay(int n) {
        string str = "1";
        int count;
        int i;

        while(--n){
            string cur = "";
            for(i = 0; i < str.size(); i++){
                count = 1;
                while((i+1 < str.size()) && (str[i] == str[i+1])){
                    count++; i++;
                }
                cur += to_string(count) + str[i];
            }
            str = cur;
        }
        return str;
        
    }
};

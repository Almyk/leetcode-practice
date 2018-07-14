class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string res = "";

        while(i >= 0 && j >= 0){
            int sum = (a[i--]-'0') + (b[j--]-'0') + carry;

            switch(sum){
                case 0: 
                case 1: carry = 0; res = to_string(sum) + res; break;
                case 2: carry = 1; res = to_string(0) + res; break;
                case 3: carry = 1; res = to_string(1) + res; break;
            }

        }
        while(i >= 0){
            int sum = a[i--]-'0' + carry;
            switch(sum){
                case 0: 
                case 1: carry = 0; res = to_string(sum) + res; break;
                case 2: carry = 1; res = to_string(0) + res; break;
            }
        }
        while(j >= 0){
            int sum = b[j--]-'0' + carry;
            switch(sum){
                case 0: 
                case 1: carry = 0; res = to_string(sum) + res; break;
                case 2: carry = 1; res = to_string(0) + res; break;
            }
        }
        if(carry) res = to_string(1) + res;

        return res;
    }
};

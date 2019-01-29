class Solution {
public:
    string toLowerCase(string str) {
      string res;

      for(auto ch : str)
        res += tolower(ch);
      return res;
    }
};

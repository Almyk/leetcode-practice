class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
      int mailcount = emails.size();
      map<string, int> res;

      for(int i = 0; i < mailcount; i++){
        int mailLen = emails[i].length();
        int at = emails[i].find("@");
        string temp = emails[i].substr(0,at);
        int plus = temp.find("+");
        if(plus != string::npos){
          temp = temp.substr(0,plus);
        }
        for(int j = temp.find("."); j != string::npos; j = temp.find(".")){
          temp.erase(j,1);
        }
        temp += emails[i].substr(at);
        res.insert(make_pair(temp,1));
      }
      return res.size();
    }
};

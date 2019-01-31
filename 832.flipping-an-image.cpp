class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
      vector<vector<int>> res;

      for(int i = 0; i < A.size(); i++) {
        vector<int> temp;
        for(auto it = A[i].rbegin(); it != A[i].rend(); it++) {
          if(*it == 1)
            temp.push_back(0);
          else
            temp.push_back(1);
        }
        res.push_back(temp);
      }
      return res;
    }
};

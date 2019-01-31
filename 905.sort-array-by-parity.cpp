class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
      vector<int> odd;

      for(auto it = A.begin(); it != A.end();) {
        if(*it % 2 || *it == 1) {
          odd.push_back(*it);
          it = A.erase(it);
        } else {
          it++;
        }
      }
      A.insert(A.end(), odd.begin(), odd.end());
      return A;
    }
};

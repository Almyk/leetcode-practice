class Solution {
public:
    bool judgeCircle(string moves) {
      int u = 0, d = 0;
      int l = 0, r = 0;
      for(auto it = moves.begin(); it != moves.end(); it++) {
        switch(*it) {
        case 'U': u++; break;
        case 'D': d++; break;
        case 'L': l++; break;
        case 'R': r++; break;
        }
      }
      return (u == d && l == r);
    }
};

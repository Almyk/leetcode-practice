class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int low = 0;
        int high = INT_MAX;
        if(!strs.size()) return res;
        for(int i = 0; i < strs.size(); i++){ // find length of shortest string
            if(strs[i].size() < high) high = strs[i].size();
        }

        // binary search
        while(low <= high){
            int mid = low + (high - low) / 2;

            if(isCommonPrefix(strs, low, mid)){
                res += strs[0].substr(low, mid-low+1);
                low = mid + 1;
            }
            else high = mid - 1;
        }
        
        return res;
    }

    bool isCommonPrefix(vector<string>& strs, int l, int h){
        for(int i = 1; i < strs.size(); i++){
            for(int j = l; j <= h; j++){
                if(strs[0][j] != strs[i][j]) return false;
            }
        }
        return true;
    }
};

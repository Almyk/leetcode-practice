class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0;
        vector<int> failure = lps(needle);
        int result = -1;
        int lens = haystack.size();
        int lenp = needle.size();
        int i = 0, j = 0;

        while(i < lens && j < lenp){
            if(haystack[i] == needle[j]){
                i++; j++;
            }
            else if(j == 0) i++;
            else j = failure[j-1];
        }
        return ((j == lenp) ? (i - lenp) : -1);
    }
private:
    vector<int> lps(string& pat){
        int n = pat.size();
        int i;
        vector<int> failure(n, 0);

        for(int j = 1; j < n; j++){
            i = failure[j-1];
            while((pat[j] != pat[i]) && (i > 0))
                i = failure[i-1];
            if(pat[j] == pat[i])
                failure[j] = i + 1;
            else failure[j] = 0;
        }
        return failure;
    }
};

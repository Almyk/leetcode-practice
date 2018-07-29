class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;

        while(l < r){
            int m = (l+r)/2;
            if(nums[m] == target) return m;
            else if(nums[m] > target) r = m-1;
            else l = m+1;
        }
        return (target > nums[l]) ? l+1: l;
    }

};
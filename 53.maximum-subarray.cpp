class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int max = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] + nums[i] > nums[i]){
                nums[i] = nums[i-1] + nums[i];
            }
            if(nums[i] > max) max = nums[i];
        }
        return max;
    }
};

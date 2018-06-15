class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //if(nums.size() < 2) return NULL;

        map<int, int> hash;
        vector<int> res(2);
        for(int i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(hash.find(diff) != hash.end()){
                res[0] = hash[diff];
                res[1] = i;
                return res;
            }
            hash[nums[i]] = i;
        }
        return res;
    }
};

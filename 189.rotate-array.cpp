class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp, temp2;
        int j = 0;
        int len = nums.size();
        int loc;
        k = k % nums.size();
        int count = 0;
        for(int i = 0; count < len; i++){
            int j = i;
            temp = nums[i];
            do{
                loc = (j+k)%len;
                temp2 = nums[loc];
                nums[loc] = temp;
                temp = temp2;
                j = loc;
                count++;
            }while(j != i);
        }
    }
};

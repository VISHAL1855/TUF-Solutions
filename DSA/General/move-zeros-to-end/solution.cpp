class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int zeroposition = 0;
        for (int current=0; current <= nums.size()-1;current++){
            if(nums[current] != 0){
                swap(nums[current],nums[zeroposition]);
                zeroposition++;
            }
        }
    }
};
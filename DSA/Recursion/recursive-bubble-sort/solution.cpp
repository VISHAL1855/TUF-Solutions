class Solution {
public:
    void bs(vector<int>& nums, int n){
        int count = 0;
        if (n==0) return;
        for (int i =0;i<=n-1;i++){
            if (nums[i] > nums[i+1]){
                swap(nums[i],nums[i+1]);
                count++;
            }
        }
        if (count == 0) return;
        bs(nums,n-1);
    }
    vector<int> bubbleSort(vector<int>& nums) {
        bs(nums,nums.size()-1);
        return nums;

    }
};

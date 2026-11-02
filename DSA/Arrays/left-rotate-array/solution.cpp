class Solution {
public:
    void reversArray(vector<int>&nums, int left,int right){
        while (left < right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();


        k = k % n;

        reversArray(nums,0,k-1);
        reversArray(nums,k,n-1);
        reversArray(nums,0,n-1);

    }
};
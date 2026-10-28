class Solution{	
	public:
        vector<int> reversed(vector<int>& nums, int left, int right){
            if (left >= right) return nums;
            swap(nums[left],nums[right]);
            return reversed(nums,left+1, right-1);
        }
		vector<int> reverseArray(vector<int>& nums){			
			reversed(nums,0,nums.size()-1);
            return nums;
		}
};
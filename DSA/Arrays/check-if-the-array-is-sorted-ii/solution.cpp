class Solution{	
	public:
        bool issort(vector<int>& nums, int i=0){
            if (i >= nums.size()-1) return true;
            if (nums[i] > nums[i+1]) return false;
            return issort(nums,i+1);
        }
		bool isSorted(vector<int>& nums){
			if (issort(nums)){
                return true;
            }else{
                return false;
            }
		}
};
class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for (int i =0; i <nums.size();i++){
            int max_index = i;
            for (int j = i+1; j < nums.size();j++){
                if (nums[j] < nums[max_index]){
                    max_index = j ;
                }
            }
            swap(nums[i],nums[max_index]);
        }
        return nums;

    }
};

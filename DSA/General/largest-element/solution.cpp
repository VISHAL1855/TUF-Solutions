class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largets = INT_MIN;
        for (auto it : nums){
            if (it > largets) largets = it;
        }
        return largets;

    }
};
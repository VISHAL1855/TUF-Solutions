class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = INT_MIN;
        int sec_large = INT_MIN;

        for (auto it : nums){

            if (it > largest){
                sec_large = largest;
                largest = it ;
            } else if (it < largest && it > sec_large){
                sec_large = it;
            }
        }

        return sec_large == INT_MIN ? -1 : sec_large;
      
    }
};
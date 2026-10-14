class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        for (int i =1 ; i < nums.size();i++) {
            /* Consider here first element is sorted so i = 1*/
            int key = nums[i]; //temporary storage to keep the track 
            int position = i - 1 ; // we need to check all the previous places so to track 

            while (position >= 0 && nums[position] > key){ 
                //check to validate that the element is >
                nums[position + 1] = nums[position]; //swapping the element with the next element
                position--; // check all the previous elements if greater then swap

            }
            nums[position + 1] = key; // using the -- your key will be add the position of the replaced element and we need the temporary key that is stored to be swapped
        }
        return nums;
    }
};

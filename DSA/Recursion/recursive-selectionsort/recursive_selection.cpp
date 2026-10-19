#include <iostream>
using namespace std;
#include <vector>
void ss(vector<int>& nums, int start){
    int min = start;
    if (start >= nums.size() - 1) return;

    for(int i=start+1; i <=nums.size() - 1;i++ ){
        if (nums[i] < nums[min]){
            min = i;
        }
    }
    swap(nums[start],nums[min]);
    ss(nums,start+1);
}
int main() {
    // Write C++ code here
    vector<int> nums = {1,4,2,45,6,4,5,6};
    ss(nums,0);
    for(auto it:nums){
        cout << it <<" , ";
    }
    return 0;
}

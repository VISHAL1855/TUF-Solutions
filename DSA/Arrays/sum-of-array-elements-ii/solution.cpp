class Solution{	
	public:
        int s(vector<int> n,int size){
            if (size == n.size()) return 0;
            return n[size] + s(n,size+1);
        }
		int arraySum(vector<int>& nums){
			int to= s(nums,0);
            return to;
		}
};
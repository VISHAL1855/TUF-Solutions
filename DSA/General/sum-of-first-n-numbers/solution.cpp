class Solution{	
	public:
        int sumd(int n){
            if (n == 0) return 0;
            return n + sumd(n-1);
            
        }
		int NnumbersSum(int N){
            int s = sumd(N);
            return s;
			
		}
};
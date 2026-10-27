class Solution{	
	public:
        long long int fac(int n){
            if (n <=1 ) return 1;
            return n * fac(n-1);
        }
		long long int factorial(int n){
			long long int total = fac(n);
            return total;
		}
};
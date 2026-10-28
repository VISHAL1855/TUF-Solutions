class Solution{	
	public:
        bool factors(int n, int i=2){
            if (n < 2) return false;
            if (i*i > n) return true;

            if (n %i == 0 ) return false;
            return factors(n,i+1);

        }
		bool checkPrime(int num){
            if (factors(num)){
                return true;
            }else{
                return false;
            }
			
		}
};
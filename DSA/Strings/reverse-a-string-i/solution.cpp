class Solution{	
public:
    void reversev(vector<char>& k,int left, int right){
        if (left >= right) return ; 
        swap(k[left],k[right]);
        reversev(k, left+1, right-1);
    }
	vector<char> reverseString(vector<char>& s){
		reversev(s,0,s.size()-1);
        return s;
	}
};
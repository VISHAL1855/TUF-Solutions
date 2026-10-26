class Solution{	
	public:
		bool anagramStrings(string &s,string &t){
			unordered_map<char,int> cmap;
            if (s.size() != t.size()) return false;
            for (auto it : s){
                cmap[it]++;
            }

            for (auto k : t){
                cmap[k]--;
                if (cmap[k] < 0 ) return false;
            }
            return true;
		}
};
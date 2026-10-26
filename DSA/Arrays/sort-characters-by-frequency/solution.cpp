class Solution{	
	public:
		vector<char> frequencySort(string& s){
			unordered_map<char,int> cmap;
            vector<char> freq;

            for (auto it : s){
                cmap[it]++;
            }
            for (auto k : cmap){
                freq.push_back(k.first);
            }
            
            sort (freq.begin(),freq.end(),[&cmap](char a, char b){
                if (cmap[a] != cmap[b]){
                    return cmap[a] > cmap[b];
                }
                return a < b;});
            return freq;
		}
};
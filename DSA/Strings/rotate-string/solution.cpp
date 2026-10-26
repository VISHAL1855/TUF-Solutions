class Solution{	
	public:
		bool rotateString(string& s,string& goal){
            if (s.size() != goal.size()) return false;
			for (int i = 0 ; i < s.size();i++){
                for (int j=0; j < goal.size(); j++){
                    if (s[i] == goal[j]){
                        int x = 0;
                        int y = j;

                        while (x < s.size() && s[x] == goal[y]){
                            x++;
                            y++;
                            if (y == goal.size()) y = 0;
                        }
                        if (x == s.size()){
                            return true;
                        }
                    }
                }
                return false;
            }
            return false;
		}
};
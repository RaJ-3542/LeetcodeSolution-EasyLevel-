class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> res;
        if(s.size()<10){
            return res;
        }
        map<string,int> mp;
        for(int i = 0; i<s.size()-9;i++){
            string sub = s.substr(i,10);
            mp[sub]++;
            
        }
        for(auto it : mp){
            if(it.second>1){
                res.push_back(it.first);
            }

        }
        return res;
    }
};
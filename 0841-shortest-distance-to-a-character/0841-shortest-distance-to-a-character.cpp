class Solution {
public:
    vector<int> shortestToChar(string s, char c) {

        vector<int> vec;
        for(int i = 0; i<s.size();i++){
            if(s[i]==c){
                vec.push_back(i);
            }
        }
        vector<int> res;

        for(int i = 0; i<s.size();i++){
            int minn = INT_MAX;
            for(int j = 0; j<vec.size();j++){
                minn = min(minn,abs(vec[j]-i));
            }
            res.push_back(minn);

        }

        return res;
        
    }
};
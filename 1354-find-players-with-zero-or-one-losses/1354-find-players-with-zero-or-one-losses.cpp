class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {


        map<int,int> mp1;
        map<int,int> mp2;
        vector<vector<int>> res(2);

        for(auto match : matches){
            mp1[match[0]]++;    
        }
        for(auto match : matches){
            mp2[match[1]]++;
        }
        for(auto it :mp1){
            if(!mp2[it.first]){
                res[0].push_back(it.first);
            }
            
        }
        
    
        for(auto it :mp2){
            if(it.second==1){
                res[1].push_back(it.first);
            }
        }
        return res;
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        

        map<string,vector<string>> mp;
        for(auto str : strs){
            string add = str;
            sort(add.begin(),add.end());
            mp[add].push_back(str);
        }
        vector<vector<string>> res;
        for(auto it : mp){
            res.push_back(it.second);
        }

        // for(int i = 0; i<strs.size()-1;i++){
        //     // cout<<strs[i]<<endl;
        //     if(strs[i]!="0"){
        //         vector<string> ans;
        //         string str1 = strs[i];
        //         sort(str1.begin(),str1.end());
        //         ans.push_back(strs[i]);
        //         for(int j = i+1;j<strs.size();j++){
                    
        //                 string str2 = strs[j];
        //                 sort(str2.begin(),str2.end());
        //                 if(str1==str2){
        //                     ans.push_back(strs[j]);
        //                     strs[j] = "0";
        //                 }
        //         }
        //         res.push_back(ans);
        //     }
            
        // }
        // if(strs[strs.size()-1]!="0"){
        //     res.push_back({strs[strs.size()-1]});
        // }
        return res;

        
        
    }
};
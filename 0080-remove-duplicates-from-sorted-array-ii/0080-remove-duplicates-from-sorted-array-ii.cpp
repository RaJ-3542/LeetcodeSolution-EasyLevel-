class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        map<int,int> mp;
        
        int res = 0;

        for(auto n : nums){
            if(mp[n]>=2){
                continue;
            }
            else{
                mp[n]++;
            }
            
        }
        nums.clear();

        for(auto it : mp){
            // cout<<it.first<<" : "<<it.second<<endl;
            res+=it.second;

            while(it.second--){
                nums.push_back(it.first);
            }


            

        }

        return res;

        
        
    }
};
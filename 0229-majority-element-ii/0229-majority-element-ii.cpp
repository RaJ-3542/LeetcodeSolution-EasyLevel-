class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int temp = ceil(nums.size()/3);
        map<int,int> mp;
        for(auto num : nums){
            mp[num]++;
        }
        for(auto it : mp){
            
            if(it.second>temp){
                res.push_back(it.first);
            }
        }

        return res;
    }
};
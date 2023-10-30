map<int,int> mp;
bool customSort(int &a,int &b){
    return mp[a]>mp[b];
}
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;

        for(auto a : nums){
            mp[a]++;
        }
        for(auto it :mp){
            ans.push_back(it.first);
        }
        sort(ans.begin(),ans.end(),customSort);
        mp.clear();
        vector<int> res;
        for(int i = 0; i<k;i++){
            res.push_back(ans[i]);
        }
        return res;
    }
};
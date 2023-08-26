class Solution {
public:
    static bool comparePairs(const pair<int, int> &a, const pair<int, int> &b) {
        if(a.first==b.first){
            return a.second>b.second;
        }

        return a.first<b.first;
    }
    vector<int> frequencySort(vector<int>& nums) {
        
        map<int,int> mp;
        for(auto a : nums){
            mp[a]++;
        }

        vector< pair <int,int> > res;
        vector<int> ans;

        for(auto it : mp){
            res.push_back(make_pair(it.second,it.first));
        }

        sort(res.begin(),res.end(), comparePairs);
        for (int i=0; i<res.size(); i++)
        {
            int cnt = res[i].first;
            while(cnt--){
                ans.push_back(res[i].second);
            }
        }


        return ans;
    }
};
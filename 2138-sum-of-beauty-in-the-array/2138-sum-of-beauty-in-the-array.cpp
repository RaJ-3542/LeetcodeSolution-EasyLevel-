class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        
        int maxx = INT_MIN;
        int minn = INT_MAX;
        vector<int> dp;
        vector<int> dp2(nums.size(),0);
        for(int i = 0; i<nums.size();i++){
            maxx = max(maxx,nums[i]);
            dp.push_back(maxx);
        }
        for(int i = nums.size()-1;i>=0;i--){
            minn = min(minn,nums[i]);
            dp2[i] = minn;

        }
        
        int sum=0;
        for(int i = 1; i<=nums.size()-2;i++){
            if(dp[i-1]<nums[i] && nums[i]<dp2[i+1]){
                sum+=2;
            }
            else if(nums[i]>nums[i-1] && nums[i]<nums[i+1]){
                sum+=1;
            }
            else{
                sum+=0;
            }
            
        }
        
        return sum;

        // return accumulate(nums.begin()+1,nums.end()-1,0);
        
    }
};
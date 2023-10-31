class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start = 0;
        int range = nums.size();

        for(int i = 0; i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
        }

        return range;
        
    }
};
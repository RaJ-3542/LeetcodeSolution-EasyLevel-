class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> a;
        int i = 0;
        int j = 1;
        
        while(i!=nums.size()-1){
            int sum = nums[i]+nums[j];
            if(sum == target){
                a.push_back(i);
                a.push_back(j);
                break;
            }
            else if(j == nums.size()-1){
                i++;
                j = i+1;
            }
            else{
                j++;
            }
            
        }
        return a;
        
    }
};
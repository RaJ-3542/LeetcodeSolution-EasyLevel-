class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        vector<int> del;
        int cnt = 0;

        for(int i = 0; i<nums.size();i++){
            if(nums[i]!=val){
                del.push_back(nums[i]);
                cnt++;
            }
        }
        nums.clear();

        for(auto num : del){
            nums.push_back(num);
        }


        return cnt;
        
    }
};
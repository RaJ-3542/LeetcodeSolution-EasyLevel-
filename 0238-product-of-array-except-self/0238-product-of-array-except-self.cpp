class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int prod = 1;
        bool flag = false;
        for(auto num : nums){
            if(num==0){
                flag = true;
                break;

            }

            prod *= num;
        }
        

        vector<int> res;

        if(flag ==true){
            for(int i = 0; i<nums.size();i++){
                if(nums[i]!=0){
                    res.push_back(0);

                }
                else{
                    int prod = 1;

                    for(int j = 0; j<nums.size();j++){
                        if(i!=j){
                            prod*= nums[j];
                        }

                    }
                    res.push_back(prod);

                }
            }
        }
        else{
            for(auto num : nums){
            
                res.push_back(prod/num);
            }

        }

        

        return res;
    }
};
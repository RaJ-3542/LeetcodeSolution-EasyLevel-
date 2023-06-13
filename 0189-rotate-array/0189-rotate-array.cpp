class Solution {
public:
    void swap(int a, int b){
        // int temp;
        // temp = a;
        // a = b;
        // b = temp;
    }
    void rotate(vector<int>& nums, int k) {

        swap(nums[0],nums[1]);
        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));

        reverse(nums.begin()+(nums.size()-k),nums.end());
    
        reverse(nums.begin(),nums.end());


        
    }
};
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1){
            return true;
        }
        if(n>3 && (n & (n-1)) == 0 && (n-1)%3 == 0
       
){
            return true;
        }
        return false;
        
    }
};
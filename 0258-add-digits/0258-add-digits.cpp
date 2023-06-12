class Solution {
public:
    int addDigits(int num) {
        

        while(num/10!=0){
            int n = num;
            int res = 0;

            while(n!=0){
                res+=n%10;
                n= n/10;
            }
            // cout<<num<<" -> "<<res<<endl;
            num = res;
            


        }
        return num;
        
    }
};
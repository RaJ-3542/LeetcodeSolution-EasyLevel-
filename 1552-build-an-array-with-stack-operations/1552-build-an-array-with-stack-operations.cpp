class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int cnt = 1;
        vector<string> res;
        int i = 0;

        while(i<target.size()){
            if(target[i]==cnt){

                res.push_back("Push");
                cnt++;
                i++;


            }
            else{
                
                    res.push_back("Push");
                    res.push_back("Pop");
                    cnt++;

                
                
            }
            

        }

        return res;


        
    }
};
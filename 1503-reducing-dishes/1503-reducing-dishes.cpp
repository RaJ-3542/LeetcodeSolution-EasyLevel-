class Solution {
public:

    int maxSatisfaction(vector<int>& s) {

        sort(s.begin(),s.end());
        vector<int> dp;
        static int j = 0;

        for(int i = 0; i<s.size();i++){
            // cout<<"iteration"<<endl;
            j = 0;
            dp.push_back(std::accumulate(s.begin()+i,s.end(),0,
                [](int accumulator,int element){
                    
                    // accumulator = 1;
                    // cout<<accumulator<<" : "<<element<<" - "<<j<<endl;
                    return accumulator+element*(++j);
                }
            
            ));

        }
        sort(dp.begin(),dp.end());
        if(dp[dp.size()-1]<=0){
            return 0;

        }
        else{
            return dp[dp.size()-1];
        }
        

        
    }
};
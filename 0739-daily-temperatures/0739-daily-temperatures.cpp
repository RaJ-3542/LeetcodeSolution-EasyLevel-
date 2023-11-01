class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

        vector<int> res(temperatures.size(),0);
        stack<int> st;

        for(int i = 0; i<temperatures.size();++i){

            while(!st.empty() and temperatures[st.top()]<temperatures[i]){
                int j = st.top(); st.pop();
			    res[j] = i - j;
            }

            st.push(i);



        }

        return res;
        
    }
};
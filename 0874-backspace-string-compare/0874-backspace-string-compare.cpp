class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        // stack<char> st2;
        string s1 = "",s2= "";

        for(auto a : s){
            if(a=='#' && (st.empty()==false)){
                st.pop();
            }
            else if(a!='#'){
                st.push(a);
            }
        }
        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }
        for(auto a : t){
            if(a=='#' && (st.empty()==false)){
                st.pop();
            }
            else if(a!='#'){
                st.push(a);
            }
        }
        while(!st.empty()){
            s2+=st.top();
            st.pop();
        }

        // cout<<s1<<" : "<<s2<<endl;
        if(s1==s2){
            return true;
        }
        return false;



        
    }
};
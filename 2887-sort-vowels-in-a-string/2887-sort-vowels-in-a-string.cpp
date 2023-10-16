class Solution {
public:
    string sortVowels(string s) {
        vector<char> vec(s.size(),'0');
        string str = "";
        for(int i = 0; i<s.size();i++){
            char a = s[i];
            if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
                str+=a;
            }
            else{
                vec[i]=s[i];
                // cout<<vec[i]<<" : "<<s[i]<<endl;

            }
        }
        sort(str.begin(),str.end());
        int i = 0;
        string res = "";
        for(auto a : vec){
            if(a=='0'){
                // cout<<"a before "<<a<<endl;
                a = str[i];
                // cout<<a<<endl;
                i++;
            }
            res+=a;
        }
        

        return res;


        
    }
};
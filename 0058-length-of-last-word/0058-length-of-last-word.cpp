class Solution {
public:
    int lengthOfLastWord(string s) {

        int n = s.size()-1;

        int start;
        int end;

        bool flag = false;

        for(int i = n; i>=0;i--){
            if(isalpha(s[i]) && flag == false){
                flag = true;
                end = i;
                // cout<<"end" <<s[i]<<endl;
            }
            else if(!isalpha(s[i]) && flag == true){
                start = i;
                // cout<<"start" <<s[i]<<endl;
                break;
            }
        }

        return end-start;


        
    }
};
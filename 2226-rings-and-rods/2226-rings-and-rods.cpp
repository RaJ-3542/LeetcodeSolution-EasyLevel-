class Solution {
public:
    int countPoints(string rings) {

        string str = "";
        for(auto a : rings){
            // cout<<a <<" : "<<str.find(a);
            if(isdigit(a) && !(str.find(a) != string::npos)){
                str+=a;
            }
        }
        int cnt = 0;
        for(auto a : str){
            bool r=false,g=false,b=false;
            for(int i = 0; i<rings.size();i++){
                if(rings[i]==a){
                    if(rings[i-1]=='R'){
                        r = true;
                    }
                    if(rings[i-1]=='G'){
                        g = true;
                    }
                    if(rings[i-1]=='B'){
                        b = true;
                    }
                }
            }
            if(r && g && b){
                cnt++;
            }
        }
        return cnt;
        
    }
};
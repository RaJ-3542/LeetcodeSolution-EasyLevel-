class Solution {
public:
    string arrangeWords(string text) {
        vector<string> vec;
        istringstream ss(text);
        string word;
        string res;
        
        while(ss>>word){
            word[0] = tolower(word[0]);
            
            vec.push_back(word);
        }

        stable_sort(vec.begin(),vec.end(), [](const string& lhs, const string& rhs) -> bool {return lhs.size() < rhs.size();});

        for(int i = 0;i<vec.size()-1;i++){
            if(i==0){
                vec[i][0] = toupper(vec[i][0]);
            }
            res+=vec[i] + " ";
        }
        res+=vec[vec.size()-1];


        

        return res;
    }
};
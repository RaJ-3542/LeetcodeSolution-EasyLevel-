 int getPower(int k){
    int steps = 0;
    while(k!=1){
        if(k%2==0){
            k=k/2;
        }
        else{
            k = 3*k+1;
        }
        steps++;
    }
    
    return steps;

}
bool custom(int &a,int &b){
    if(getPower(a)==getPower(b)){
        return a<b;
    }
    return getPower(a)<getPower(b);
}
class Solution {
public:
   
    int getKth(int lo, int hi, int k) {
        vector<int> res;
        for(int i = lo;i<=hi;i++){
            res.push_back(i);
        }
        sort(res.begin(),res.end(),custom);
        // for(auto a : res){
        //     cout<<a<<" : "<<getPower(a)<<endl;
        // }
        return res[k-1];
    }
};
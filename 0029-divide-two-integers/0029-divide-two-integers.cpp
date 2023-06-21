class Solution {
public:
    int divide(int dividen, int diviso) {
        if(dividen==-2147483648 && diviso==-1){
            return 2147483647;
        }
        return dividen/diviso;
                                            
        
        
    }
};
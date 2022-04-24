class Solution {
public:
    string removeDuplicates(string s) {
        int sp=0;
      
        while(sp<s.length()-1){
            if(s[sp]==s[sp+1]){
                s.erase(sp,2);
                sp=0;
               
             }
               
            else{
                sp++;
                
             }

        }
    
        return s;
    }
};

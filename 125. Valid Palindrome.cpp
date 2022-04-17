class Solution {
public:
bool ispal(string str){
     int s=0;
     int e=str.length()-1;
     bool pal = 1;
     while(s<=e){
         if(str[s]!=str[e]){
         pal=0;
         break;
         }
         s++;
         e--;
     }
     if(pal){
        return 1;
     }      
     else{
         return 0;
     }
     
}    
char tolowercase(char ch){
      
    
        if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
            return ch;
        
        }
        else{
            char temp =ch-'A'+'a';
            return temp;
        }

    
   
   
}
bool valid(char ch){
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
            
            return 1;
        }
           return 0 ;
    } 

bool isPalindrome(string s) {
        string temp= "";
        
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
    for(int i=0; i<temp.length();i++){
        temp[i]=tolowercase(temp[i]);
    }
       
       bool palornot=ispal(temp);
         cout<<temp;
       
        return palornot;
    }
};

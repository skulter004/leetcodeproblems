class Solution {
    bool checkequal(int arr1[26],int arr2[26]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                return 0;
            }
            
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count[26]= {0};
        for(int i=0;i<s1.length();i++){
            int index = s1[i]-'a';
            count[index]++;
        }
        int i=0;
        int window = s1.length();
        int count2[26]= {0};
        
        while(i<window && i<s2.length()){
            int index=  s2[i] - 'a';
            count2[index]++;
            i++;
            
        }
        if (checkequal(count,count2))
            return 1;
        
           
        while(i<s2.length()){
            char newchar = s2[i];
            int index = newchar - 'a';
            count2[index]++;
            
            char oldchar = s2[i-window];
            index = oldchar-'a';
            count2[index]--;
            
            i++;
            
            
            if(checkequal(count,count2))
                return 1;
            
            
        }
        return 0;
    }
};

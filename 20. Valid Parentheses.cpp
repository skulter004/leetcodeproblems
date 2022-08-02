class Solution {
    
    bool matches(char top, char ch){
        if((ch == '}' && top =='{') || (ch == ']' && top == '[' )|| (ch  == ')' && top == '(') )
            return true;
        
        return false;
    }
    
public:
    bool isValid(string s) {
        stack<char> st;
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        //opening bracket push
        if(ch == '(' || ch == '{' || ch == '[' ){
            st.push(ch);
        }
        else{
            if(!st.empty()){
                char top = st.top();
                if(matches(top, ch)){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        
        else{
            return false;
        }
        }

    }

    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
    }
};

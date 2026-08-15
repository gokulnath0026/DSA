class Solution {
public:
    bool isValid(string s) {
        int count=0;
        stack<char>st;
       for(char ch:s){
        if(ch=='('||ch=='{'||ch=='['){
            st.push(ch);
        }
        else if(ch==')'||ch=='}'||ch==']'){
            if(st.empty()){
                return false;
            }
            if(ch==')' && st.top()!='('){
                return false;
            }
            if(ch=='}' && st.top()!='{'){
                return false;
            }
            if(ch==']' && st.top()!='['){
                return false;
            }
            st.pop();
        }
       }
       
       return st.empty(); 
    }
};
class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
                continue;
            }
            if(st.empty()) return false;
            char x = st.top();
            
            if((x=='(' && s[i]==')') || (x=='{' && s[i]=='}') || (x=='[' &&                  s[i]==']')){
                st.pop();
            }
            else return false;
        }
        if(st.empty()) return true;
        else return false;
    }
};

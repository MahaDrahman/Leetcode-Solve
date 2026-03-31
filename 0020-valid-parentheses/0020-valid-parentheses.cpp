class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
    for(auto  c: s){
        if(c == '(' or c == '{' or c == '['){
            st.push(c);
        }else{
            if(st.empty()){
                
                return false;
            }
        char top = st.top();
        if((c == ')' and top == '(') or (c == '}' and top == '{')
        or (c == ']' and top == '[') ){
            st.pop();
        }
        else{
            return false;
        }
        }
    }
    if(st.empty()) return true;
    else return false;
    }
};
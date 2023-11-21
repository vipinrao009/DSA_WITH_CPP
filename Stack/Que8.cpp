/*class Solution {
public:
    bool isValid(string s) {
        Stack<char>st;

        for(int i=0; i<s.length(); i++)
        {
            char ch = s[i];
            if(ch=='('||, ch=='{' || ch=='[')
            {
                st.push(ch)
            }

            else
            {
             if(!st.empty())
             {
                // closing bracket mila
                // match ho gya Parentheses stack ke top se
                if(ch==')' && st.top()=='(')
                {
                    st.pop()''
                } 
                if(ch=='}' && st.top()=='{')
                {
                    st.pop();
                }
                if(ch==']'&& st.top() =='[')
                {
                    st.pop();
                }
                else
                {
                    //match nhi huaa Parentheses stack ke top se
                    return false;
                }

             }
             else 
               {
                  return false;
               }
               
            }
        }

        if(!st.empty)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i = 0; i<s.length(); i++){
            char bracket = s[i];

            if(bracket == '(' || bracket == '{' || bracket == '['){
                // For open bracket-> just push
                st.push(bracket);
            }
            else{
                if(!st.empty()){
                    // For closing bracket
                    if( bracket == ')' && st.top() == '(' ){
                        st.pop();
                    }
                    else if( bracket == '}' && st.top() == '{' ){
                        st.pop();
                    }
                    else if( bracket == ']' && st.top() == '[' ){
                        st.pop();
                    }
                    else{
                        // No matching bracket
                        return false;
                    }
                }
                else{
                    // Hidden test cases
                    // single element string jo only ek 
                    // close bracket "]" "}" ")" contain karti ho 
                    // jiska mtlb hamesha invalid parenthese honge
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
class Solution {
public:
    bool isValid(string s) {
       stack<int> st;
       if (s.length()%2!=0)
       return false;
      
       for (int i=0;i<s.length();i++)
       {        
           if ( st.empty() && s[i]==')'||st.empty() && s[i]==']' ||st.empty() && s[i]== '}')
           {
            return false;
              break;   
       }
           else if (s[i]=='(' or s[i]=='[' or s[i]=='{')
           {
               st.push(s[i]);
           }
           else if (s[i]==')' and st.top()=='(')
           {
               st.pop();
           }
           else if (s[i]=='}' and st.top()=='{')
           {
               st.pop();
           }
          else  if (s[i]==']' and st.top()=='[')
           {
               st.pop();
           }
           else {
               return false;
               break;

           }
       }
           if (st.empty())
           {
               return true;

           }
           else
           {
               return false;
           }
       
        
    }
};

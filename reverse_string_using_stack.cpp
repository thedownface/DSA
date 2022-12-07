#include <bits/stdc++.h>
#include<stack>
using namespace std;

string reverse_string(string s)
{
stack<char> st;
for(int i=0;i<s.length();i++)
{
    st.push(s[i]);
}
string op;
for(int i=0;i<s.length();i++)
{
    op+=st.top();
    st.pop();
}
return op;
}
int main() {
    string s="geeksforgeeks";
    cout<<reverse_string(s);

    return 0;
}

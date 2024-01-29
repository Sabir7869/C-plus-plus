#include<bits/stdc++.h>
using namespace std;
bool valid(string s){
    int len = s.length();
    stack<char>st;
    for(int i=0 ; i<len ;i++){
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else{
            if(!st.empty()){
                char top = st.top();
                if( (ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '[') ){
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
    return false;
}
 int main()
{
    string s;
    cin>>s;
    if(valid(s)){
        cout<<"Yes Valid Parentheses "<<endl;
    }
    else{
        cout<<"Not a Valid Parentheses"<<endl;
    }
return 0;
}
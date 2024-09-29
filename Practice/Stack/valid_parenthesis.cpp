// Valid Parentheses 

#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isValidParenthesis(string s)
{
    stack<char>st;
    int n = s.length();
    int ct = 0;
    for(int i =0; i<n; i++){
        if(s[i] =='(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
            ct++;
        }else{
            if(!st.empty() && s[i] == ')'){
                if(st.top()!='('){
                    return false;
                }
                st.pop();
            }
            if(!st.empty() && s[i] == '}'){
                if(st.top()!='{'){
                    return false;
                }
                st.pop();
            }
            if(!st.empty() && s[i] == ']'){
                if(st.top()!='['){
                    return false;
                }
                st.pop();
            }
        }
    }
    if(ct>0){
        return st.empty();
    }else{
        return false;
    }
}

int main()
{
    string s = "[";
    cout << isValidParenthesis(s) <<endl;
    return 0;
}

// st = ['[', '[']
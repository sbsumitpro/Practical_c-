// Redundant bracket -  A pair of brackets is said to be redundant when a subexpression is surrounded by needless/ useless brackets.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool findRedundantBrackets(string &s){
    int n = s.length();
    vector<char>st;
    for(int i=0;i<n;i++){
        //check if you encounter ')', then check the stack top and pop out each element to check if there is any operators
        if(s[i]==')'){
            char top = st.back();
            st.pop_back();
            bool hasOperator = false;
            while(!st.empty() && top != '('){
                if(top== '+' || top == '-' || top == '*' || top == '/'){
                    hasOperator = true;
                }
                top = st.back();
                st.pop_back();
            }
            if(!hasOperator){
                return true;
            }
        }else{
            st.push_back(s[i]);
        }

    }
    return false;
}

int main()
{
    string s;
    getline(cin,s);
    cout <<findRedundantBrackets(s)<<endl;
    return 0;
}
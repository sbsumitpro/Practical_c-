#include<iostream>
#include<vector>
#include<string>
using namespace std;

void permute(string s, int n, string curr, vector<string>&ans, int si ){
    cout<<si<<": "<<s<<endl;
    if(si == n){
        cout<<"ans"<<endl;
        ans.push_back(s);
    }
    for(int i = si;i<n;i++){
        swap(s[i], s[si]);
        permute(s,n,curr,ans,si+1);
        swap(s[si],s[i]);
    }
}

int main()
{
    string s = "abc";
    int n = s.length();
    vector<string> ans;
    permute(s,n,"",ans,0);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}





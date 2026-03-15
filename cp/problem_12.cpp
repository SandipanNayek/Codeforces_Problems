#include<iostream>
#include<stack>
#include<map>
using namespace std;
int main(){
stack<char>st;
string s;
cin>>s;
map<char,char>mp={
    {')','('},
    {'}','{'},
    {']','['}
};

if(s.length() % 2 != 0) {cout<<"NO";
        return 0;}
 for(int i = 0; i < s.length(); i++) {
     if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }

    else{
        if(st.empty() || st.top()!=mp[s[i]]){
            cout<<"NO";
            return 0;
        }
        else{
            st.pop();
        }
    }
       

}
if(st.size()==0) cout<<"YES";
else cout<<"NO";
}

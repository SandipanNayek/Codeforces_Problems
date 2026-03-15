#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    string s;
    cin>>s;
    if((s.size() % t)!=0){
        cout<<-1;
        return 0;
    }
    string ans;
   unordered_map<char,int>mp;
   for(auto & x : s){
    mp[x]++;
   } 
   for(auto & x: mp){
    char c= x.first;
    int f=x.second;
    if(f % t!=0){
        cout<<-1;
        return 0;
    }
    ans.append(f/t,c);
   }
  for(int i=0;i<t;i++){
   cout<<ans;
  }
}
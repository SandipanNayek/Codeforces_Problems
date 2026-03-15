#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   string s;
   cin>>s;
   for(int i=0;i<s.size();i++){
    int d=s[i]-'0';  // convert int
    if(d==9 && i==0 ) continue;
    int new_s=min(d,9-d);
    s[i]=new_s +'0';  // convert char
   }
   cout<<s<<endl;
}
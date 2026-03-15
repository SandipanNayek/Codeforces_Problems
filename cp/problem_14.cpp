#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
   char x=s[0];
   int ascii=(int)x;
   if(97<=ascii && 122>=ascii){
    int ans=ascii-32;
    s[0]=(char)ans;
   }
   for(int i=0;i<s.size();i++){
    cout<<s[i];
   }
}
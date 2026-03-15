#include<iostream>
using namespace std;
#include<climits>
#include<vector>
int main(){
   int n;
   cin>>n;
   while(n>0){
      string s;
      cin>>s;
      int first=s.find('1');
      int second=s.rfind('1');
      int count=0;
      for(int i=first;i<=second;i++){
         if(s[i]=='0') count++;
      }
      cout<<count<<"\n";
      n--;

   }

}
   
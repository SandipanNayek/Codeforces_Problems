#include<iostream>
using namespace std;
#include<climits>
#include<vector>
int main(){
   int t,a,b,n;
   cin>>t;
   while(t>0){
    cin>>a>>b>>n;
    int count=0;
    while(a<=n && b<=n){
          if(a>b){b=b+a;}
          else{a=a+b;}
          count++;
    }
    cout<<count<<"\n";
    t--;
}
    
   }
   
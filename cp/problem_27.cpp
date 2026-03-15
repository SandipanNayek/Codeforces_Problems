#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
string s;
cin>>s;
string v="";
int step=0;
int i=0;
  while(i<n){
    v=v+s[i];
    step++;
    i=i+step;
}
cout<<v;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,days;
cin>>n>>days;
vector<int>v(n);
vector<int>ans;
vector<pair<int,int>>p;
for(long long i=0;i<n;i++){
    cin>>v[i];
    p.push_back({v[i],i+1});
}
sort(p.begin(),p.end());
long long count=0;
for(long long i=0;i<n;i++){
if(p[i].first<=days){
    count++;
    days-=p[i].first;
    ans.push_back(p[i].second);
}
else{
    break;
}
}
cout<<count<<"\n";
for(int c : ans){
    cout<<c<<" ";
}
}
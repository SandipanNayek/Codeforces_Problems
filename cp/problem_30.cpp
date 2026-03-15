#include<bits/stdc++.h>
using namespace std;
long long check(long long cap) {
    long long counta=0;
       for(long long k=2;k*k*k<=cap;k++){
        counta+=(cap/(k*k*k));
       }
       return counta;
}

int main(){
long long m;
cin>>m;
long long lo=0;
long long hi=1e18;
long long ans=-1;
while(lo<=hi){
    long long mid=lo+(hi-lo)/2;
    long long counta=check(mid);
    if(counta==m) ans=mid;
    if(counta>=m) hi=mid-1;
    else lo=mid+1;
}
cout<<ans;
}
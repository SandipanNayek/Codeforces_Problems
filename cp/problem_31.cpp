#include<bits/stdc++.h>
using namespace std;
long long check(long long mid,long long n,long long m){
  long long cnt=0;
  for(long long i=1;i<=n;i++){
         cnt+=min(mid/i,m);

  }
  return cnt;
}

int main(){
long long n;
long long m;
long long k;
cin>>n>>m>>k;
long long lo=1;
long long hi=(n*m);
long long ans=-1;
while(lo<=hi){
    long long mid=lo+(hi-lo)/2;
    int cnt=check(mid,n,m);
    if(cnt>=k) {
        ans=mid;
        hi=mid-1;
    }
    else{
        lo=mid+1;
    }
}
cout<<ans;
  

}
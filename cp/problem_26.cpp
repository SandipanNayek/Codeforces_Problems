#include<iostream>
using namespace std;
#include<climits>
#include<vector>

bool damage(long long k,long long h,vector<int>&v){
    int n=v.size();
    long long count=0;
    for(int i=0;i<n-1;i++){
        if(v[i] + k >= v[i+1]) {
    count += (v[i+1] - v[i]);
      }
    else {
    count += k;
     }

        
    }
    count=count+k;
    if(count<h) return false;
    else return true;
}


int main(){
   int t;
   cin>>t;
   while(t>0){
    long long n,h;
    cin>>n;
    cin>>h;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
      long long lo=1;
      long long hi=h;
      long long ans=-1;
      while(lo<=hi){
        long long mid=lo+(hi-lo)/2;
        if(damage(mid,h,v)==true){
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
      }
      cout<<ans<<"\n";
    t--;
   }
   
}
   
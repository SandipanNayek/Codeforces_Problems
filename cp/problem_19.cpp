#include<iostream>
using namespace std;
#include<climits>
#include<vector>
int main(){
    long long n,k;
    cin>>n;
    cin>>k;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    long long lo=0;
    long long hi=k+2000;
    while(lo<=hi){
        long long mid=lo+(hi-lo)/2;
        long long z=0; long long cost=0;
        for(int i=0;i<n;i++){
             cost+=max(((mid * a[i]-b[i])),z);  
        }
        if(cost<=k) lo=mid+1;
        else hi=mid-1;
    }
    cout<<hi;
}
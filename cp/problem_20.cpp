#include<iostream>
using namespace std;
#include<climits>
#include<vector>
int main(){
    long long n,k;
    cin>>n;
    cin>>k;
    long long lo=0;
    long long hi=k;
    long long ans =-1;
    
    while(lo<=hi){
        long long mid=lo+(hi-lo)/2;
        long long sum=0;
        for(int i=2;i<=k;i++){
        sum+=i-1;
        }
    }
    
}
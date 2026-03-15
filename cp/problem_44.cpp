#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x,y,n;
        cin>>x>>y>>n;
        long long k = n - ((n - y) % x);
        cout<<k;
        cout<<endl;
    }
}
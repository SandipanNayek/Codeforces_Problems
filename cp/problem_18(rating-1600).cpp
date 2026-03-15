#include<iostream>
using namespace std;
#include<climits>
int main(){
    string s;
    cin>>s;
    long long b1,b2,b3,p1,p2,p3;
    cin>>b1>>b2>>b3;
    cin>>p1>>p2>>p3;
    long long r;
    cin>>r;
    long long a1=0;
    long long a2=0;
    long long a3=0;
    for( auto &ch :s){
        if(ch=='b') a1++;
        if(ch=='s') a2++;
        if(ch=='c') a3++;
    }
    long long lo=0;
    long long hi=r+200;
    while(lo<=hi){ 
        long long mid=lo+(hi-lo)/2;
        long long z=INT_MIN;
        // mid denotes that how many hamburger can be ready
        long long r1=max(a1 * mid -b1,z); // req bread
        long long r2=max(a2 * mid -b2,z); // req sasuage
        long long r3=max(a3 * mid -b3,z); // req chise
        long long price=r1*p1 + r2*p2 +r3*p3;
        if(price<=r) lo=mid-1;
        else hi=mid-1;
    }
    cout<<hi;
}
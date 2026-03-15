#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  a,b,c,d;
        cin>>a>>b>>c>>d;
        long long x=min(a,b);
        long long y=max(b,c);
        long long z=min(c,d);
        cout<<x<<" "<<y<<" "<<z;
        cout<<endl;
    }
    
}

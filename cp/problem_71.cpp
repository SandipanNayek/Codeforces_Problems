#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m,p,q;
    cin >> n >> m >> p >> q;
    int x= n % p;
    int y= n / p;
    if(x == 0 && y*q != m){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

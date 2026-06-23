
#include <bits/stdc++.h>
using namespace std;
 
// --- Type shortcuts ---
using ll = long long;
using ull = unsigned long long; 
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
 
// --- Macros ---
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vii vector<ll>
#define i128 _int128
#define get(x) cin>>x
#define print(x) cout<<x<<"\n";

#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define __ return;

#define fr(i,a,n) for(int i = a; i < n; i++)
#define fr1(i,a,n) for(int i = 1; i <= n; i++)
#define rev(i,a,n) for(int i = n-1; i >= a; i--)

// "all my victories belong to god and all my loses are mine alone" 
// ------------------------- SOLVE -------------------------- 

void solve() {
    ll n ,s,m;
    cin>>n>>s>>m;
    vii interval;
    fr(i,0,n){
      ll l ,r;
      get(l);
      get(r);
     interval.pb(l);
     interval.pb(r);
    }
    
    ll ct=0;
    bool flag=false;
    for(int i=0;i<interval.size();i=i+2){
         ll time=interval[i]-ct;
          ct=interval[i+1];
          if(time >= s) {
            flag=true;
            break;
          }
    }
    if(m - ct >= s){
        flag=true;
    }
    cout << (flag ? "YES" : "NO") << '\n';
    
}
int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
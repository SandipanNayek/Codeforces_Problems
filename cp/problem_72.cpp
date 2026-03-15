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
#define pb push_back
#define ff first
#define ss second
 
// --- Constants ---
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7; // Sometimes 998244353
 
// --- Utility functions ---
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
 
ll modpow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}
 
ll modinv(ll a, ll m = MOD) { // Format (m must be prime)
    return modpow(a, m - 2, m);
}

void solve() {
   int n;
   int s;
   cin>>n;
   cin>>s;
   vector<ll>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
  ll l=0;
  ll r=0;
  ll ans=0;
  ll sum=0;
  while(r<n){
   sum+=v[r];
     while(sum>s && l<=r){
        sum-=v[l];
        l++;
     }
     if(sum==s) ans=max(ans,r-l+1);
     r++;
  }
  if(sum<s) cout<<-1<<"\n";
  else  cout<<n-ans<<"\n";
}
    


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;        //  If problem has only one test case, just comment this line
    while (t--) {
        solve();
    }
    return 0;
}

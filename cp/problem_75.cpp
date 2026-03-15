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

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0;
    int r=n-1;
   if(v[l] == v[r]){
    while(l + 1 < n && v[l] == v[l+1]){
        l++;
    }
    while( r - 1 >=0 && v[r]==v[r-1]){
        r--;
    }
    l++;
    r--;
   }
   else{
    int countl=0;
    int countr=0;
    int templ=l;
    int tempr=r;
   while(templ+1 < n && v[templ] == v[templ+1]){
        templ++;
        countl++;
    }
    while(tempr - 1 >= 0 && v[tempr]==v[tempr-1]){
        tempr--;
        countr++;
    }
    if(countl>=countr){
        l=templ+1;
    }
    else{
        r=tempr-1;
    }
   }
   int ans=r-l+1;
    if( ans <0){
        cout<<0<<"\n";
    }
    else{
        cout<<ans<<"\n";
    }
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

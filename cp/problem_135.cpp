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

// "all my victories belong to god and all my loses are mine alone"


bool check(ll mid,vector<ll>&a,vector<ll>&c,ll h){
ll count=0;
ll n= a.size();
for(int i=0;i<a.size();i++){
 ll temp=((mid - 1)/c[i]) + 1;
 count+=temp * a[i];
 if(count >= h) return true;
}
return false;
}



void solve(){
    ll h,n;
    cin>>h>>n;
    vector<ll>a(n);
    vector<ll>c(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    ll lo=1;
    ll hi=40000000007ll;
    ll ans=-1;
    while(lo <=hi){
        ll mid=lo+(hi-lo)/2;
        if(check(mid,a,c,h)==true){
          ans=mid;
          hi=mid-1;
        }
        else{
            lo =mid+1;
        }
    }
    cout<<ans<<"\n";
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




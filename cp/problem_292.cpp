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

#define fr(i,n) for(int i = 0; i < n; i++)
#define fr1(i,n) for(int i = 1; i <= n; i++)
#define rev(i,n) for(int i = n-1; i >= 0; i--)


// --- Constants ---
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD =  998244353;
 
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
 
ll modinv(ll a, ll m = MOD) { 
    return modpow(a, m - 2, m);
}


 

// "all my victories belong to god and all my loses are mine alone"
 
 
 
 
// ------------------------- SOLVE -------------------------- 
    void solve() {
    int n;
    cin >> n;
    
    vii a(n);
    fr(i,n) cin >> a[i];
    
    vii b(n);
    fr(i,n) cin >> b[i]; 
    if (n == 2) {
        ll g = gcd(a[0], a[1]);
        int ans = 0;
        if (g < a[0]) ans++;
        if (g < a[1]) ans++;
        cout << ans << "\n";
        return;
    }
    
    vii d(n - 1);
    for (int i = 0; i < n - 1; i++) {
        d[i] = gcd(a[i], a[i+1]);
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ll t;
        if (i == 0) {
            t = d[0];
        } else if (i == n - 1) {
            t = d[n - 2];
        } else {
            t = lcm(d[i-1], d[i]);
        }

        if (t < a[i]) {
            ans++;
        }
    }
    
    cout << ans << "\n";
}




int main() {
     //Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}







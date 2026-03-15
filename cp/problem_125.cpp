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

void solve() {
int n;
        cin >> n;
        vector<ll> a(n);    
        for (int i = 0; i < n; i++) cin >> a[i];
 
        // Compute GCD of even indices
        ll g1 = 0;
        for (int i = 0; i < n; i += 2) {
            g1 = gcd(g1, a[i]);
        }
 
        // Compute GCD of odd indices
        ll g2 = 0;
        for (int i = 1; i < n; i += 2) {
            g2 = gcd(g2, a[i]);
        }
 
        // Check if g1 works
        bool ok1 = true;
        for (int i = 1; i < n; i += 2) {
            if (a[i] % g1 == 0) {
                ok1 = false;
                break;
            }
        }
 
        // Check if g2 works
        bool ok2 = true;
        for (int i = 0; i < n; i += 2) {
            if (a[i] % g2 == 0) {
                ok2 = false;
                break;
            }
        }
 
        ll ans = 0;
        if (ok1 && g1 != 0) ans = g1;
        else if (ok2 && g2 != 0) ans = g2;
        cout << ans << "\n";

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





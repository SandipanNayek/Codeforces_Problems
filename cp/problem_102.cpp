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
bool check(ll w, vector<ll>& arr, ll c) {
     long double count = 0;
    for (auto x : arr) {
        long double val = (x + 2*w);
        count += val * val;
        if (count > (long double)c) return false;
    }
    return true;
}

void solve() {
    ll n, c;
    cin >> n >> c;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    ll lo = 0, hi = c, ans = 0;

    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        if (check(mid, arr, c)==true) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

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


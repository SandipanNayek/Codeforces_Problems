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
    long long r, avg;
    cin >> n >> r >> avg;

    vector<pair<long long,long long>> v(n); 
    long long sum = 0;

    for(int i=0;i<n;i++){
        cin >> v[i].second >> v[i].first;
        sum += v[i].second;
    }
    long long rem = n * avg - sum;
    if(rem <= 0){
        cout << 0 << "\n";
        return;
    }

    sort(v.begin(), v.end()); 
    long long ans = 0;
    for(int i=0;i<n && rem > 0;i++){
        long long can_add = min(r - v[i].second, rem);
        ans += can_add * v[i].first;
        rem -= can_add;
    }

    cout << ans << "\n";
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    //cin >> t;        //  If problem has only one test case, just comment this line
    while (t--) {
        solve();
    }
    return 0;
}





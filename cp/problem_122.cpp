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

const int MAX_VAL = 200002; 
vector<int> primes;

void sieve() {
    vector<bool> is_prime(MAX_VAL, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p < MAX_VAL; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i < MAX_VAL; i += p)
                is_prime[i] = false;
        }
    }
    for (int p = 2; p < MAX_VAL; p++) {
        if (is_prime[p]) {
            primes.push_back(p);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    long long min_cost = 2e18; 

   
    for (int p : primes) {

        vector<long long> costs;
        
        
        for (long long val : a) {
            long long cost;
            long long remainder = val % p;
            
            if (remainder == 0) {
                cost = 0;
            } else {
                cost = p - remainder;
            }
            costs.push_back(cost);
        }

       
        if (costs.size() < 2) continue; 

        
        long long min1 = 2e18;
        long long min2 = 2e18;

        for (long long c : costs) {
            if (c < min1) {
                min2 = min1;
                min1 = c;
            } else if (c < min2) {
                min2 = c;
            }
        }
        
        
        min_cost = min(min_cost, min1 + min2);
        
        
        if (min_cost == 0) break;
    }

    cout << min_cost << "\n";
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





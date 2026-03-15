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
int mxcount;  

void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<int>>& v, int& count) {
    int n = v.size();
    int m = v[0].size();
    if (row < 0 || col < 0 || row >= n || col >= m || vis[row][col] || v[row][col] == 0) return;

    vis[row][col] = 1;
    count += v[row][col]; 

    // explore 4 directions
    dfs(row + 1, col, vis, v, count);
    dfs(row - 1, col, vis, v, count);
    dfs(row, col + 1, vis, v, count);
    dfs(row, col - 1, vis, v, count);
}

void water(vector<vector<int>>& v) {
    int n = v.size();
    int m = v[0].size();
    vector<vector<int>> vis(n, vector<int>(m, 0));
    mxcount = 0; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j] && v[i][j] != 0) {
                int count = 0;
                dfs(i, j, vis, v, count);
                mxcount = max(mxcount, count);
            }
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    water(v);
    cout << mxcount << "\n";
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


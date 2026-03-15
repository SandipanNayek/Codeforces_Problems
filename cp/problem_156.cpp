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
const int MOD =  998244353; //1e9 + 7; // Sometimes
 
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
 
// ---------- Disjoint Set (Union-Find) Template ----------
struct DSU {
    vector<int> parent, size, rank;
 
    DSU(int n) {
        parent.resize(n );
        size.assign(n , 1);
        rank.assign(n , 0);
        for (int i = 0; i < n; i++) parent[i] = i;
    }
 
    int find(int node) {
        if (parent[node] == node) return node;
        return parent[node] = find(parent[node]); // Path Compression
    }
 
    void unionBySize(int u, int v) {
    int ulp_u = find(u);
    int ulp_v = find(v);
 
    if (ulp_u == ulp_v) return;
 
    if (size[ulp_u] < size[ulp_v]) {
        parent[ulp_u] = ulp_v;
        size[ulp_v] += size[ulp_u];
    } 
    else {
        parent[ulp_v] = ulp_u;
        size[ulp_u] += size[ulp_v];
    }
}
 
 
    void unionByRank(int u, int v) {
        int pu = find(u), pv = find(v);
        if (pu == pv) return;
        if (rank[pu] < rank[pv]) {
            parent[pu] = pv;
        } else if (rank[pu] > rank[pv]) {
            parent[pv] = pu;
        } else {
            parent[pv] = pu;
            rank[pu]++;
        }
    }
};
// --------------------------------------------------------
vector<int> sieve(int n) {  /// prime numbers
    vector<int> prime(n+1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i)
                prime[j] = 0;
        }
    }
    return prime;
}
 
int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int closest = nums[0] + nums[1] + nums[2]; // initial sum
 
    for(int i = 0; i < n - 2; i++) {
        if(i > 0 && nums[i] == nums[i-1]) continue; // skip duplicates if needed
 
        int left = i + 1, right = n - 1;
        while(left < right) {
            int sum = nums[i] + nums[left] + nums[right];
 
            if(abs(sum - target) < abs(closest - target))
                closest = sum; // update closest
 
            if(sum < target) left++;
            else if(sum > target) right--;
            else return target; // exact match
        }
    }
    return closest;
}
 
 
// "all my victories belong to god and all my loses are mine alone"
 

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }

    if (sum == 0) {
        cout << 0 << "\n";  
        return;
    }

    ll ans = max(1LL, 2 * mx - sum);
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
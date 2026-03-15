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
#define vi vecor<int>
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
        return parent[node] = find(parent[node]);
    }
 
    void unionBySize(int u, int v) {
        int ulp_u = find(u);
        int ulp_v = find(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        } else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
 
    void unionByRank(int u, int v) {
        int pu = find(u), pv = find(v);
        if (pu == pv) return;
        if (rank[pu] < rank[pv]) parent[pu] = pv;
        else if (rank[pu] > rank[pv]) parent[pv] = pu;
        else parent[pv] = pu, rank[pu]++;
    }
};
// --------------------------------------------------------
 
vector<int> sieve(int n) {
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

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}


 
// -------------- BIT MANIPULATION LIBRARY -----------------

// Check kth bit set or not (0-indexed)
bool checkBit(ll n, int k) { return (n >> k) & 1; }

// Set the kth bit
ll setBit(ll n, int k) { return n | (1LL << k); }

// Clear the kth bit
ll clearBit(ll n, int k) { return n & ~(1LL << k); }

// Toggle kth bit
ll toggleBit(ll n, int k) { return n ^ (1LL << k); }

// Count set bits
int countBits(ll n) { return __builtin_popcountll(n); }

// Check if n is power of two
bool isPowerOfTwo(ll n) { return n > 0 && (n & (n - 1)) == 0; }

// Remove rightmost set bit
ll removeRightmostBit(ll n) { return n & (n - 1); }

// Get rightmost set bit
ll rightmostBit(ll n) { return n & -n; }

// Convert decimal to binary string
string decToBin(ll n) {
    if(n == 0) return "0";
    string s = "";
    while(n > 0) {
        s += char('0' + (n & 1));
        n >>= 1;
    }
    reverse(all(s));
    return s;
}

// Convert binary string to decimal
ll binToDec(string s) {
    ll val = 0;
    for (char c : s) {
        val = val * 2 + (c - '0');
    }
    return val;
}

// Count trailing zeros
int ctz(ll n) { return __builtin_ctzll(n); }

// Count leading zeros (64-bit)
int clz(ll n) { return __builtin_clzll(n); }

// XOR from 0 to n
ll xorToN(ll n) {
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    return 0;
}

// XOR in range [l, r]
ll xorRange(ll l, ll r) {
    return xorToN(r) ^ xorToN(l - 1);
}

// ----------------------------------------------------------


int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int closest = nums[0] + nums[1] + nums[2];
    for(int i = 0; i < n - 2; i++) {
        if(i > 0 && nums[i] == nums[i-1]) continue;
        int left = i + 1, right = n - 1;
        while(left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if(abs(sum - target) < abs(closest - target))
                closest = sum;
            if(sum < target) left++;
            else if(sum > target) right--;
            else return target;
        }
    }
    return closest;
}

// "all my victories belong to god and all my loses are mine alone"




// ------------------------- SOLVE --------------------------



 void solve() {
   int n,k;
   cin>>n>>k;
   vector<int>v(n+1);
   for(int i=1;i<=n;i++){
    cin>>v[i];
   }

   sort(v.begin(),v.end());
   if(k==0){
     if(v[k+1]==1){
        cout<<-1<<"\n";
        return;
     }
     else{
        cout<<v[k+1]-1<<"\n";
        return;
     }
   }
   if(k>=n){
       cout<<v[n]<<"\n";
       return;
   }
   if(v[k]==v[k+1]){
    cout<<-1<<"\n";
    return;
   }
   else{
    cout<<v[k]<<"\n";
    return;
   }
    
}





int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


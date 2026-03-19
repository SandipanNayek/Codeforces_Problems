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
#define vi vector<int>
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

    if (ulp_u == ulp_v) return ;

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

vector<int> prime_factors(int n){
    vector<int> res;
    for(int i=2 ; i * i <= n ; i++){
        if(n % i == 0) res.push_back(i);
        while(n % i == 0){
            n /= i;
        }
    }
    if(n > 1) res.push_back(n);
 
    return res;   
 
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


int ceil_div(int a,int b){
    return (a + b - 1) / b;
}


// SegmentTree 
class SGTree {	
public:
    vector<int> seg;
	SGTree(int n) {
		seg.resize(4 * n + 1);
	}

	void build(int ind, int low, int high, vector<int>&arr,int orr) {
		if (low == high) {
			seg[ind] = arr[low];
			return;
		}

		int mid = (low + high) / 2;
		build(2 * ind + 1, low, mid, arr,!orr);
		build(2 * ind + 2, mid + 1, high, arr,!orr);
		if(orr) seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
        if(!orr) seg[ind] = seg[2 * ind + 1]^ seg[2 * ind + 2];
	}

	int query(int ind, int low, int high, int l, int r) {
		// no overlap
		// l r low high or low high l r
		if (r < low || high < l) return INT_MAX;

		// complete overlap
		// [l low high r]
		if (low >= l && high <= r) return seg[ind];

		int mid = (low + high) >> 1;
		int left = query(2 * ind + 1, low, mid, l, r);
		int right = query(2 * ind + 2, mid + 1, high, l, r);
		return min(left, right);
	}
	void update(int ind, int low, int high, int i, int val, int orr) {
		if (low == high) {
			seg[ind] = val;
			return;
		}

		int mid = (low + high) >> 1;
		if (i <= mid) update(2 * ind + 1, low, mid, i, val,!orr);
		else update(2 * ind + 2, mid + 1, high, i, val, !orr);
		if(orr) seg[ind] = seg[2 * ind + 1] | seg[2 * ind + 2];
        if(!orr) seg[ind] = seg[2 * ind + 1]^ seg[2 * ind + 2];
	}
};
 
// "all my victories belong to god and all my loses are mine alone"
 
 
 
 
// ------------------------- SOLVE --------------------------
void solve() {
   int n,m;
   cin>>n>>m;
   int ele= pow(2,n);
   vi v(ele);
   fr(i,ele){
    cin>>v[i];
   }
   SGTree sg(ele);
   
   if(n % 2==0) sg.build(0,0,ele-1,v,0);
   else sg.build(0,0,ele-1,v,1);

   while(m--){
    int i,val;
    cin>>i>>val;
    i--;
    if(n % 2==0) sg.update(0,0,ele-1,i,val,0);
    else sg.update(0,0,ele-1,i,val,1);
    cout<<sg.seg[0]<<"\n";
   }
}




int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    t=1;
    //cin >> t;

    while (t--) solve();

    return 0;
}
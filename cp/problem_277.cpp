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
#define vii vector<ll>

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
    vector<ll> parent, size, rank;
 
    DSU(ll n) {
        parent.resize(n );
        size.assign(n , 1);
        rank.assign(n , 0);
        for (int i = 0; i < n; i++) parent[i] = i;
    }
 
    int find(ll node) {
        if (parent[node] == node) return node;
        return parent[node] = find(parent[node]);
    }
 
    void unionBySize(ll u, ll v) {
    ll ulp_u = find(u);
    ll ulp_v = find(v);

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
// "all my victories belong to god and all my loses are mine alone"
 
 
 
 
// ------------------------- SOLVE --------------------------

void solve() {
        ll n;
        cin>>n;
        DSU ds(n+1);
        vector<pair<ll,ll>>t;
        for(int i=0;i<n-1;i++){
            ll a,b;
            cin>>a>>b;
            if(ds.find(a) == ds.find(b)){
                t.pb({a,b});
            }
            else{
                ds.unionBySize(a,b);
            }
        }
        vector<ll>l;
        for(int i=1;i<=n;i++){
            if(ds.find(i)==i){
                l.pb(i);
            }
        }

        cout<<l.size()-1<<"\n";

        for(int i=0;i<l.size()-1;i++){
           cout<<t[i].first<<" "<<t[i].second<<" "<<l[i]<<" "<<l[i+1]<<"\n";
        }
    
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}


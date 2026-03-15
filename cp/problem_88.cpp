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
int mx=0;
void dfs(int node,vector<vector<int>>&adj,vector<int>&vis,int depth){
        vis[node]=1;
        mx=max(mx,depth);
        for(auto adjnode : adj[node]){
            if(!vis[adjnode]){
                dfs(adjnode,adj,vis,depth+1);
            }
        }
    
}

void solve(){
    mx=0;
    int n;
    cin>>n;
    vector<int>arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    vector<int>vis(n+1,0);
    vector<int>res;
    vector<vector<int>>adj(n+1);
    for(int i=1;i<=n;i++){
        if(arr[i]==-1){
          res.push_back(i);
        }
        else{
           adj[arr[i]].push_back(i);
        }
    }
    for(auto & it : res){
        dfs(it,adj,vis,1);
    }
    cout<<mx<<"\n";
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



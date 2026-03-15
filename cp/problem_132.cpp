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




typedef pair<long long,int> pli;

vector<int> shortestpath(int n,int m,vector<vector<int>>&edges){
    vector<vector<pair<int,int>>> adj(n+1);
    for(auto it : edges){
        adj[it[0]].push_back({it[1],it[2]});
        adj[it[1]].push_back({it[0],it[2]});
    }

    vector<long long> dist(n+1, 1e18);  // use long long
    vector<int> parents(n+1);
    for(int i=1;i<=n;i++) parents[i]=i;

    priority_queue<pli, vector<pli>, greater<pli>> pq;
    dist[1]=0;
    pq.push({0,1});

    while(!pq.empty()){
        auto it=pq.top(); pq.pop();
        long long dis=it.first;
        int node=it.second;

        if(dis > dist[node]) continue; 
        for(auto it : adj[node]){
            int adjnode = it.first;
            long long edw = it.second;
            if(dis + edw < dist[adjnode]){
                dist[adjnode] = dis + edw;
                pq.push({dist[adjnode], adjnode});
                parents[adjnode] = node;
            }
        }
    }

    if(dist[n] == 1e18) return {-1};  

    vector<int> path;
    int node = n;
    while(parents[node] != node){
        path.push_back(node);
        node = parents[node];
    }
    path.push_back(1);
    reverse(path.begin(), path.end());
    return path;
}

void solve(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> v(m, vector<int>(3));
    for(int i=0;i<m;i++)
        for(int j=0;j<3;j++)
            cin >> v[i][j];

    vector<int> path = shortestpath(n, m, v);

    if(path.size() == 1 && path[0] == -1){
        cout << "-1\n";
    } else {
        for(int node : path) cout << node << " ";
        cout << "\n";
    }
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





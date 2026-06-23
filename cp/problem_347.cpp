#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long; 
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vii vector<ll>
#define i128 _int128
#define get(x) cin>>x
#define print(x) cout<<x<<"\n";

#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define __ return;

#define fr(i,a,n) for(int i = a; i < n; i++)
#define fr1(i,a,n) for(int i = 1; i <= n; i++)
#define rev(i,a,n) for(int i = n-1; i >= a; i--)

void dfs(int node,vector<int>&vis,vector<int>&order,vector<vector<int>>&adj ){
    vis[node]=1;
    order.pb(node);
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,vis,order,adj);
        }
    }
}
void solve() {
    int n;
    cin>>n;
    vector<vector<int>>adj(n+1);
    vector<vector<int>>val(n+1, vector<int>(n+1));
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        adj[a].push_back(b);
        adj[b].push_back(a);
        val[a][b] = c;
    }
    ll cost =0;
    vector<int>vis(n+1,0) , order;
    dfs(1,vis,order,adj);
    
    // order 1->5->3->(2)->4->6->(1)
    int sz = order.size();
    if(sz > 0) { // Safety check to prevent % 0 or out of bounds
        for(int i = 0; i < sz; i++) {
            int current = order[i];
            int next_node = order[(i + 1) % sz];
            
            if(mp.find(current) != mp.end() && mp[current] != next_node) {
                cost += val[next_node][current];
            }
        }
    }
    cout<<cost<<"\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    t=1;
    //cin >> t;
    
    while (t--) solve();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n;

    vector<vector<int>> g(n+1);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> lvl(n+1), cnt(n+1), ch(n+1);
    vector<bool> vis(n+1);

    queue<int> q;
    q.push(1);
    vis[1]=1;
    lvl[1]=1;
    cnt[1]=1;

    int mxl=1;

    while(!q.empty()){
        int u=q.front(); q.pop();
        mxl=max(mxl,lvl[u]);
        for(int v:g[u]){
            if(!vis[v]){
                vis[v]=1;
                lvl[v]=lvl[u]+1;
                cnt[lvl[v]]++;
                ch[u]++;
                q.push(v);
            }
        }
    }

    int mw=0, ms=0;
    for(int i=1;i<=mxl;i++) mw=max(mw,cnt[i]);
    for(int i=1;i<=n;i++) ms=max(ms,ch[i]+1);

    cout << max(mw,ms) << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}

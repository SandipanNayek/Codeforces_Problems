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
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define ff first
#define ss second
#define vi vector<int>
#define vii vector<ll>
#define i128 _int128

#define fr(i,a,n) for(int i = a; i < n; i++)
#define fr1(i,a,n) for(int i = 1; i <= n; i++)
#define rev(i,a,n) for(int i = n-1; i >= a; i--)

// "all my victories belong to god and all my loses are mine alone" 
// ------------------------- SOLVE -------------------------- 

void solve() {
    ll n;
    string s;
    cin>>n>>s;
    vector<ll>pos;
    for(int i=0;i<n;i++){
       if(s[i]=='*') pos.pb(i);
    }
    ll k=pos.size();
    if(k==0){
        cout<<0<<'\n';
        return;
    }
    
    vector<ll>adj(n);
    ll cost=0;
    for(int i=0;i<k;i++){
     adj[i]=pos[i]-i;
    }
    ll median=adj[k/2];
    for(int i=0;i<k;i++){
        cost+=abs(adj[i]-median);
    }

 cout<<cost<<"\n";
    
   
}
int main() {
     //Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}






 
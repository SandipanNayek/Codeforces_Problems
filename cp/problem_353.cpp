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

void solve() {
    int n , k;
    cin>>n>>k;
    vi v(n);
    fr(i,0,n){
        get(v[i]);
    }
    unordered_set<int>st;
    for(auto it : v){
        st.insert(it);
    }
    if(st.size() > k){
        cout<<"-1"<<"\n";
        return;
    }
    vector<int>ans;
    while(ans.size() < k){
        for(auto it : st){
            ans.pb(it);
            if(ans.size() == k) break;
        }
    }
    vector<int>f;
    for(int i=1;i<=n;i++){
        for(auto it : ans){
          f.pb(it);
        }
    }
    cout<<k * n<<"\n";
    for(auto it : f){
        cout<<it<<" ";
    }
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    t=1;
    cin >> t;
    
    while (t--) solve();

    return 0;
}
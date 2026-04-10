
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

typedef pair<ll,ll>p;
void solve() {
    int n,m,x;
    cin>>n>>m>>x;
    vi v(n);
    fr(i,0,n){
        cin>>v[i];
    }
     priority_queue<p, vector<p>, greater<p>> pq;
     for(int i=1;i<=m;i++){
        pq.push({0,i});
     }
     vector<int>ans(n);
     for(int i=0;i<n;i++){
        auto it = pq.top();
        pq.pop();
        ans[i]=it.second;

        int h8=it.first + v[i];
        pq.push({h8,it.second});
     }
     cout<<"YES"<<"\n";
     for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
     }
     cout<<"\n";
     

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






 
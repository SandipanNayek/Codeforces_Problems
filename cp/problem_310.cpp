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
    int n,l;
    cin >> n>>l;
    vi v(n);
    fr(i,0,n){
        cin>>v[i];
    }
    sort(all(v));
   map<int,int>mp;
    for(auto it: v){
        mp[it]++;
    }
    priority_queue<int>pq;
    for(auto it : mp){
        pq.push(it.second);
    }
    int ans=0;
    while(!pq.empty()){
        if(n-pq.top() > l){
            ans+=1;
            n-=pq.top();
        }
        else{   // n-pq.top() <= l
          ans++;
          break;
        }
        pq.pop();
    }
    cout<<ans<<"\n";
   
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






 
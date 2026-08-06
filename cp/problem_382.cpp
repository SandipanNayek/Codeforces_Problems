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
#define i128 __int128
#define get(x) cin >> x
#define print(x) cout << x << "\n"

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define fr(i,a,n) for(int i = a; i < n; i++)
#define fr1(i,a,n) for(int i = 1; i <= n; i++)
#define rev(i,a,n) for(int i = n-1; i >= a; i--)

void solve() {
    
   int n;
   cin>>n;
   vii v(n);
   fr(i,0,n){
    get(v[i]);
   }
   ll sum =0;
   multiset<ll>ms;

   fr(i,0,n){ 
    ms.insert(v[i]);
    sum+=v[i];
   }
   if(sum < 1){
    cout<<-1<<"\n";
    return;
   }
   ll cSum=0;
   for(int i=0;i<n;i++){
    ll need = 1 - cSum;
    auto it = ms.lower_bound(need);
    cSum+=*it;
    ms.erase(it);
    cout<<cSum<<(i==n-1?"":" ");
   }
   cout << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while(tc--) solve();

    return 0;
}

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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(auto it : s){
        mp[it]++;
    }
    int ans=0;
    ans+=(mp['A'] < m ?(m-mp['A']) : 0);
    ans+=(mp['B'] < m ?(m-mp['B']) : 0);
    ans+=(mp['C'] < m ?(m-mp['C']) : 0);
    ans+=(mp['D'] < m ?(m-mp['D']) : 0);
    ans+=(mp['E'] < m ?(m-mp['E']) : 0);
    ans+=(mp['F'] < m ?(m-mp['F']) : 0);
    ans+=(mp['G'] < m ?(m-mp['G']) : 0);
    cout<<ans<<"\n";
    
   }

int main() {
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






 
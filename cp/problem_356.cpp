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
    int n;
    cin>>n;
    vi a(n+1);
    vi b(n+1);
    fr(i,1,n+1){
        get(a[i]);
    }
    fr(i,1,n+1){
        get(b[i]);
    }
    unordered_map<int,int>mp1;
    unordered_map<int,int>mp2;
    for(int i=1;i<=n;i++){
        mp1[a[i]] = i;
    }
    for(int i=1;i<=n;i++){
        mp2[b[i]] = i;
    }
    int maxi = 0;
    unordered_map<int,int>mp3;
    for(int i=1;i<=n;i++){
      int pos = ((mp2[i] - mp1[i]) + n) % n;
      mp3[pos]++;
    }
    for(auto it : mp3){
      maxi = max( maxi ,it.second);
    }

    cout<<maxi<<"\n";
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    t=1;
   // cin >> t;
    
    while (t--) solve();

    return 0;
}
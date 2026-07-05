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
    int d = n / 5;
    int r = n % 5;
    string s = "aeiou";
    string ans="";
    if(n <= 5){
      for(int i=0;i<n;i++){
          ans+=s[i];
      }
      cout<<ans<<"\n";
      return;
    }
    else{
        
        for(int i=0;i<5;i++){
            for(int j=0;j<d;j++){
                ans+=s[i];
            }
            if(r >0){
                ans+=s[i];
                r--;
            }
        }
    }

    cout<<ans<<"\n";
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
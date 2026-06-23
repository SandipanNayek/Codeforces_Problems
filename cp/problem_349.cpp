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

int needOp(int maxi){
   int res =0;
   while(maxi !=0){
      res++;
      maxi/=2;

   }
   return res;

}
void solve() {
    string s;
    cin >>s;
    int ans = INT_MAX;
    for(char c ='a'; c<='z';c++){
        int maxi = 0;
        int curr =0;
       for(auto it : s){
        if(it == c) {
           maxi = max(maxi , curr);
           curr=0;
        }
        else{
            curr++;
        }
       }
       
       maxi = max(maxi , curr);
       
       ans = min(ans , needOp(maxi));
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
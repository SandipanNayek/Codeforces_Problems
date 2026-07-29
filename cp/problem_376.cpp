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
#define __ return

#define fr(i,a,n) for(int i = a; i < n; i++)
#define fr1(i,a,n) for(int i = 1; i <= n; i++)
#define rev(i,a,n) for(int i = n-1; i >= a; i--)
void solve() {
    ll n , l , r;
    cin>>n>>l>>r;
    vii v(n);
    fr(i,0,n){
        cin>>v[i];
    }
    ll cnt =0;
    ll i=0;
    ll j=0;
    ll sum =0;
    while(j < n){
        sum+=v[j];
       if(l <= sum && sum<=r){
        cnt++;
        sum=0;
        i=j+1;
       }
       else if(sum > r){
         while(i <=j && sum>r){
            sum-=v[i];
            i++;
         }
         if(l <= sum && sum<=r){
        cnt++;
        sum=0;
        i=j+1;
       }

       }
       j++;
    }
    print(cnt);

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
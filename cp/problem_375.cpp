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
    string s;
    int k;
    cin>>s>>k;
    int l=0;int r =k;
    k=s.size() - k;
    string ans ="";
    char ch = *min_element(s.begin() , s.end());
    while(k--){
        char mini = '9';
        for(int i=l;i<=r;i++){
          if(mini > s[i] && !(ans.empty() && s[i] == '0')){
            mini=s[i];
            l=i+1;
          }
          if(mini == ch){
                break;
            }
        }
        r++;
        ans+=mini;
    }
    print(ans);

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}
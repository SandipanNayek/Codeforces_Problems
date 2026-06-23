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
    int n;
    cin >> n;
    
    vi a(n);
    vi s(n);
    
    fr(i,0,n) {
        cin >> a[i];
        s[i] = a[i];
    } 
    sort(all(s));
    int gm = s[n / 2];
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    
    fr1(i,1,n) {
        int cg = 0;
        int cl = 0;   
        for (int j = i - 1; j >= 0; j--) {
            if (a[j] > gm) {
                cg++;
            } else if (a[j] < gm) {
                cl++;
            }
            
            int l = i-j;
            if (l % 2 != 0) {
                if (cg <= l/2 && cl <= l / 2 && dp[j] != -1) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
    }
    
    cout << dp[n] << "\n";
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






 
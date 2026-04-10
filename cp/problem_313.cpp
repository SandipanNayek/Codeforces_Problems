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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mini1=min(c,d);
    int maxi1=max(c,d);
    int mini2=min(a,b);
    int maxi2=max(a,b);
    if((mini1 > mini2 && mini1 < maxi2 && maxi1 > maxi2) || (mini2 > mini1 && mini2 < maxi1 && maxi2 > maxi1)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

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






 
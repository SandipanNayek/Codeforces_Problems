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


// --- Constants ---
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD =  998244353;

class SGTree {
public:
    vector<int> seg;
	SGTree(int n) {
		seg.resize(4 * n + 1);
	}

	void build(int ind, int low, int high, vector<int>&arr) {
		if (low == high) {
			seg[ind] = arr[low];
			return;
		}

		int mid = (low + high) / 2;
		build(2 * ind + 1, low, mid, arr);
		build(2 * ind + 2, mid + 1, high, arr);
		seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
	}

	int query(int ind, int low, int high, int l, int r) {
		// no overlap
		// l r low high or low high l r
		if (r < low || high < l) return 0;

		// complete overlap
		// [l low high r]
		if (low >= l && high <= r) return seg[ind];

		int mid = (low + high) >> 1;
		int left = query(2 * ind + 1, low, mid, l, r);
		int right = query(2 * ind + 2, mid + 1, high, l, r);
		return left + right;
	}
	void update(int ind, int low, int high, int i, int val) {
		if (low == high) {
			seg[ind]+= val;
			return;
		}

		int mid = (low + high) >> 1;
		if (i <= mid) update(2 * ind + 1, low, mid, i, val);
		else update(2 * ind + 2, mid + 1, high, i, val);
		seg[ind] = seg[2 * ind + 1] + seg[2 * ind + 2];
	}
};
 

// "all my victories belong to god and all my loses are mine alone"
 
// ------------------------- SOLVE -------------------------- 
    

void solve(){
    ll n,x,y;
    cin>>n>>x>>y;
    vii v(n),a(n,0);
    fr(i,0,n){
        cin>>v[i];
    }
    ll cnt=0;
    fr(i,0,n){
        a[i] =v[i] / x;
        cnt +=v[i]/x;
    }
    ll maxi=-1e9;
    for(int i=0;i<n;i++){
        ll tmaxi=v[i] + (cnt - a[i])*y;
        maxi=max(tmaxi,maxi);
    }
    cout<<maxi<<"\n";

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






 
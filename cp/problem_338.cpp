#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vi = vector<int>;

#define all(x) (x).begin(), (x).end()
#define get(x) cin >> x
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fr(i,a,n) for(int i=a;i<n;i++)
#define __ return

void solve() {
    int n,m;
    get(n);
    get(m);

    vi v(n),u(m);

    fr(i,0,n) get(v[i]);
    fr(i,0,m) get(u[i]);

    sort(all(u));

    long long prev = min(1LL * v[0], 1LL * u[0] - v[0]);

    fr(i,1,n){

        long long best = 1e18;

        if(v[i] >= prev){
            best = v[i];
        }

        auto it = lower_bound(all(u), prev + v[i]);

        if(it != u.end()){
            best = min(best , 1LL * (*it) - v[i]);
        }

        if(best == 1e18){
            no;
            __;
        }

        prev = best;
    }

    yes;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
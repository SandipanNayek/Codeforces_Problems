#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
       int n;
        cin >> n;
        vector<int>arr;
        long long sum=0;
       for(int i=0;i<=n-1;i++){
             cin>>arr[i];
       }
        long long lo = 0, hi = arr.size()-1;
        long long ans = -1;
 
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            long long sq = mid * mid;
 
            if (sq == n) {
                ans = mid;
                break;
            } else if (sq > n) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
 
        if (ans == -1) {
            cout << -1 << "\n";
        } else {
            cout << ans / 2 << " " << ans - ans / 2 << "\n";
        }
    }
    return 0;
}

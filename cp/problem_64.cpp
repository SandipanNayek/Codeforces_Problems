#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<long long> nums(n);   
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> arr(m);
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    sort(nums.begin(), nums.end());
    sort(arr.begin(), arr.end());
    int l = 0;
    int r = n - 1;
    long long sum = 0;
    for (int i = 0; i < m; i++) {
        if (arr[i] == 1) r--;
        else {
            if (r - l + 1 >= arr[i]) {
                while (arr[i] > 1) {
                    sum += nums[r];
                    r--;
                    arr[i]--;
                }
                r--;
            }
        }
    }
    while (r >= 0) {
        sum += nums[r];
        r--;
    }
    cout << sum << "\n";
}

     

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}

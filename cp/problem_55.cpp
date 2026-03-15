#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int> freq(n + 2, 0);
    for(int x : arr) freq[x]++;

    int missing = 0;
    for(int i = 0; i < k; i++) {
        if(freq[i] == 0) missing++; // numbers < k missing
    }

    int count_k =  freq[k]; // occurrences of k

    
    int ops = max(missing, count_k);

    cout << ops << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}

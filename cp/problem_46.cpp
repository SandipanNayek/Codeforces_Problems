#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        unordered_map<int, int> mp;
        for (int x : v) mp[x]++;

        typedef pair<int,int> pi; // {freq, val}
        priority_queue<pi, vector<pi>, greater<pi>> pq;

        for (auto &ele : mp) {
            pq.push({ele.second, ele.first});
        }

        int maxc = 0;
        while (!pq.empty()) {
            int f = pq.top().first;   // smallest freq
            int cnt = pq.size();      // how many elements remain
            maxc = max(maxc, f * cnt);
            pq.pop();
        }

        cout << maxc << "\n";
    }
}

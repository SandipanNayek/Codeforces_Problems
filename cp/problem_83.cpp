#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int top = 0, bottom = 0, any = 0;
    for (char c : s) {
        if (c == '0') top++;
        else if (c == '1') bottom++;
        else any++;
    }

    string ans(n, '+');

    for (int i = 0; i < top; i++) ans[i] = '-';
    for (int i = 0; i < bottom; i++) ans[n - 1 - i] = '-';

    int left = top;
    int right = n - bottom - 1;

    if (top + bottom + any >= n) {
        for (int i = 0; i < n; i++) ans[i] = '-';
    } 
    else {
        for (int i = left; i < left + any && i < n; i++)
            if (ans[i] == '+') ans[i] = '?';
        for (int i = right; i > right - any && i >= 0; i--)
            if (ans[i] == '+') ans[i] = '?';
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}

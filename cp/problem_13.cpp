#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        if (!st.empty() && st.top() == s[i]) {
            st.pop();   // cancel same pair
        } else {
            st.push(s[i]);
        }
    }

    if (st.empty()) cout << "YES";
    else cout << "NO";
}
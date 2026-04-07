#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin()+1,(x).end()
#define all0(x) (x).begin(),(x).end()
template<class T1> istream &operator>>
(istream &cin, vector<T1> &a) 
{ for (auto &x : a) cin >> x; return cin; }
template<class T1> ostream &operator<<
(ostream &cout, vector<T1> &a)
{ for (auto &x : a) cout << x <<" "; return cout; }
void solve()
{
    int n,m;
    cin>>n>>m;
    map<int,int> mp;
    vector<vector<int>> v;
    v.push_back(vector<int>(0));
    for(int i=1;i<=n;i++)
    {
        int l;
        cin>>l;
        v.push_back(vector<int>(l+1));
        for(int j=1;j<=l;j++)
        {
            cin>>v[i][j];
            mp[v[i][j]]++;
        }
    }   
    for(int i=1;i<=m;i++)
    {
        if(!mp[i])
        {
            cout<<"NO"<<endl;
            return ;
        }
    }
    int flag=1;
    for(int i=1;i<=n;i++)
    {
        int cnt=0;
        for(int j=1;j<=v[i].size()-1;j++)
        {
            if(mp[v[i][j]]>=2)cnt++;
        }
        if(cnt==v[i].size()-1)flag++;
    } 
    if(flag>=3)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T=1;
    cin>>T;
    while(T--)
    {
       solve();
    }
    return 0;
}

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


struct ST {
    vector<int> t;
    ST(int n) { t.resize(4*n+1); }
    void build(int i,int l,int r,int a[]){
        if(l==r){ t[i]=a[l]; return; }
        int m=(l+r)/2;
        build(2*i+1,l,m,a);
        build(2*i+2,m+1,r,a);
        t[i]=min(t[2*i+1],t[2*i+2]);
    }
    int q(int i,int l,int r,int L,int R){
        if(R<l||r<L) return INT_MAX;
        if(L<=l&&r<=R) return t[i];
        int m=(l+r)/2;
        return min(q(2*i+1,l,m,L,R),q(2*i+2,m+1,r,L,R));
    }
    void upd(int i,int l,int r,int p,int v){
        if(l==r){ t[i]=v; return; }
        int m=(l+r)/2;
        if(p<=m) upd(2*i+1,l,m,p,v);
        else upd(2*i+2,m+1,r,p,v);
        t[i]=min(t[2*i+1],t[2*i+2]);
    }
};

void solve(){
    int n; cin>>n;
    int m=2*n;
    vector<int>a(m);
    for(int&i:a) cin>>i;

    vector<int> t(2*m+1,-1);
    for(int i=0;i<m;i++) t[2*i+1]=a[i];

    vector<int> p(2*m+1);
    int c=0,r=0;
    for(int i=1;i<2*m;i++){
        int mir=2*c-i;
        if(i<r) p[i]=min(r-i,p[mir]);
        while(i-1-p[i]>=0 && i+1+p[i]<=2*m && t[i-1-p[i]]==t[i+1+p[i]]) p[i]++;
        if(i+p[i]>r) c=i,r=i+p[i];
    }

    vector<vector<int>> qr(m);
    for(int i=1;i<2*m;i++){
        if(p[i]){
            int L=(i-p[i])/2;
            int R=(i+p[i])/2-1;
            qr[R].push_back(L);
        }
    }

    ST st(n+1);
    vector<int> init(n+1,-1);
    st.build(0,0,n,init.data());

    int ans=0;
    for(int R=0;R<m;R++){
        st.upd(0,0,n,a[R],R);
        for(int L:qr[R]){
            int lo=0,hi=n,res=0;
            while(lo<=hi){
                int mid=(lo+hi)/2;
                if(mid==0){ res=0; lo=1; }
                else if(st.q(0,0,n,0,mid-1)>=L){
                    res=mid; lo=mid+1;
                } else hi=mid-1;
            }
            ans=max(ans,res);
        }
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}






 
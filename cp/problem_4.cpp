#include<iostream>
using namespace std;
#include<algorithm>
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n;
    cin>>k;
    cin>>l;
    cin>>c;
    cin>>d;
    cin>>p;
    cin>>nl;
    cin>>np;
    int drink=(k*l)/nl;
    int slices=c*d;
    int salt=p/np;
    int mn=min(drink,min(slices,salt));
    int ans=mn/n;
    cout<<ans;
}
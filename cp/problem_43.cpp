#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==1 || n==2){ cout<<1;
        cout<<endl;
        }
        else{
            n=n-2;
            int div = n / x;
            int rem = n % x;
            if(rem == 0) cout << div + 1 ;
            else cout << div + 2 ;
            cout<<endl;
        }
    }
}
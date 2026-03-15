#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k;  // price banans
    cin>>n;  // dollors have
    cin>>w;  // want to buy
    int price=0;
    for(int i=1;i<=w;i++){
       price+=k * i;
    }
    int want=price-n;
    if(want>0)  cout<<want;
    else{
        cout<<"0";
    }
   
}

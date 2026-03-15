#include<iostream>
using namespace std;
#include<climits>
#include<vector>
int main(){
   int n;
   cin>>n;
   while(n>0){
    int x;
    cin>>x;
    int p= ((x % 10)-1) * 10;
    int count = 0;
    while( x> 0){
        x=x/10;
        count++;
    }
    int z=count*((float)(count+1)/2);
    cout<<p+z<<"\n";
    n--;
  }

}
   
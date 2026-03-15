#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    if(x==y || y==z || z==x){
      if(x==y && y==z){
        cout<<"YES";
        cout<<endl;
        cout<<x <<" "<<x<<" "<<x;
        cout<<endl;
      }
      else if(x==y){
        if(z>x){
            cout<<"NO";
            cout<<endl;
        }
        else{ //z<x
            cout<<"YES";
            cout<<endl;
            cout<<x<<" "<<z<<" "<<max(z-1,1);
            cout<<endl;
        }
      }
      else if(y==z){
        if(x>y){
            cout<<"NO";
            cout<<endl;
        }
        else{ //x<y
            cout<<"YES";
            cout<<endl;
            cout<<y<<" "<<x<<" "<<max(x-1,1);
             cout<<endl;
        }
      }
      else { // x==z
        if(y>x){
            cout<<"NO";
            cout<<endl;
        }
        else{ // y<x
            cout<<"YES";
            cout<<endl;
            cout<<x<<" "<<y<<" "<<max(y-1,1);
            cout<<endl;
        }
      }

    }
    else{
     cout<<"NO";
     cout<<endl;
    }

    }
}
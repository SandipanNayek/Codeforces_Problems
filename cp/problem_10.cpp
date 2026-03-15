#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int count=0;
    for(int i=1;i<2 * i;i++){
        if(a<=b){
            a=a * 3;
            b= b* 2;
            count++;
        }
        else if(a>b){
          cout<<count;
          break;
        }
    }
    }
#include<iostream>
using namespace std;
#include<algorithm>
#include<cmath>
int main(){
    int n;
    cin>>n;
    int var;
    // var=0 0 1
    bool flag =true;
    for(int j=1;j<=n;j++){
        cin>>var;
        if(var==1){
            flag=false;
            break;
        }
        
    }
    if(flag==false) cout<<"HARD";
    else {
        cout<<"EASY";
    }
    
}

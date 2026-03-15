#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    set<char>seen;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++ ){
        if(s.find(s[i])==i){
            count++;
        }
    }
    if(count % 2==1) cout<<"IGNORE HIM!";
    else{
        cout<<"CHAT WITH HER!";
    }

}
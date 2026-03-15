// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int hh1;
//     char ch1;
//     int mm1;
//     cin>>hh1>>ch1>>mm1;
    
//     int hh3;
//     char ch2;
//     int mm3;
//     cin>>hh3>>ch2>>mm3;

//     int t1=(hh1 * 60)+mm1;
//     int t2=(hh3 * 60)+mm3;

//     int s=t2-t1;
//         s= s / 2;

//     int div= s/60;
//         hh1+=div;
//     int rem= s % 60;
//         mm1=mm1+ rem;

//     // if(mm1==60) {
//     //      mm1=00; 
//     //      hh1=hh1+1; 
//     //      if(hh1<10 && mm1<10){ 
//     //         cout<<"0"<<hh1<<':'<<"0"<<mm1;
//     //      } 
//     //      else if(hh1<10 && mm1>10)
//     //      { cout<<"0"<<hh1<<':'<<mm1; }
//     //       else if(hh1>10 && mm1<10){ 
//     //         cout<<hh1<<':'<<"0"<<mm1; 
//     //     } 
//     //     else{ cout<<hh1<<':'<<mm1;
//     //      }
//     //      }
        
//      if(mm1>=60) {
//         hh1++;
//         mm1=(mm1-60);
//      if(hh1<10 && mm1<10){
//         cout<<"0"<<hh1<<':'<<"0"<<mm1;
//     }
//     else if(hh1<10 && mm1>=10){
//         cout<<"0"<<hh1<<':'<<mm1;
//     }
//     else if(hh1>=10 && mm1<10){
//         cout<<hh1<<':'<<"0"<<mm1;
//     }
//     else{
//          cout<<hh1<<':'<<mm1;
//     }
//     }
// else{
//     if(hh1<10 && mm1<10){
//         cout<<"0"<<hh1<<':'<<"0"<<mm1;
//     }
//     else if(hh1<10 && mm1>=10){
//         cout<<"0"<<hh1<<':'<<mm1;
//     }
//     else if(hh1>=10 && mm1<10){
//         cout<<hh1<<':'<<"0"<<mm1;
//     }
//     else{
//          cout<<hh1<<':'<<mm1;
//     }
// }

    
// }
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    int hh1, mm1, hh2, mm2;
    char c1, c2;
    cin >> hh1 >> c1 >> mm1;
    cin >> hh2 >> c2 >> mm2;

    int t1 = hh1 * 60 + mm1;
    int t2 = hh2 * 60 + mm2;
    int mid = (t1 + t2) / 2;   // midpoint in minutes

    int hh = mid / 60;
    int mm = mid % 60;

    cout << setw(2) << setfill('0') << hh << ":"
         << setw(2) << setfill('0') << mm << "\n";
    return 0;
}
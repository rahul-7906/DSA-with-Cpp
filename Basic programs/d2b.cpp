#include <iostream>
#include <math.h>
using namespace std;

int main(){
   int n=10;
   int ans=0;
   int i =0;
//    while(n!=0){
//     int rem =n%2;
//     n = n/2;
//     ans=(rem*pow(10,i))+ans;
//     i++;
//    }
//    cout<<ans<<endl;

// Method 2
    while(n!=0){
        int bit = n&1;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;

    return 0;
}
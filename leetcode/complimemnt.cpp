#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int m = n;
    int mask = 0; // 0000000....
     if(n==0)  
     cout << 1 << endl;

    while(m!=0){
     mask = (mask<<1)|1; // ...000000000101
       m= m>>1;   // mask  me kitne 0 store karne hai wo determine karega ye aur ye while loop
    }
    int ans = (~n)&mask; // ....00000000010
    cout << ans << endl;
    return 0;
}
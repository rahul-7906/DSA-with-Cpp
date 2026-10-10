#include <iostream>
using namespace std;

int countsetBits(int n){
    int count = 0;
    while(n!=0){
        if(n&1) count++;
        n=n>>1;
    }
    return count;
}

int setbits(int a, int b){
   int bits_a = countsetBits(a);
   int bits_b = countsetBits(b);

   return bits_a + bits_b;
}

int main(){
     int ans = setbits(2,3);
     cout<< ans << endl;
    return 0;
}
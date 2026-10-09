#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2;i<n;i++){
     if(n%i==0) return 1;
    }
    return 0;
}
int main(){
    if(isPrime()){
        cout<< "It is a Prime number" << endl;
    } else{
        cout<< "It is not a Prime number" << endl;
    }
    return 0;
}
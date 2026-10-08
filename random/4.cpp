#include <iostream>
#include <math.h>
using namespace std;

int main(){
   int n;
   cout<<"Enter a number : ";
   cin>>n;
    
   int ans=0;
   
   while(n!=0){
    int digit =n%10;
    ans = digit*10+ans; 
    n=n/10;
    
   }
   
   cout <<ans << endl;

    return 0;
}
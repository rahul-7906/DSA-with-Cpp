#include <iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter a number : ";
   cin>>n;
    
   int ans=0;
   while(n!=0){
    int digit =n%10;
    ans = (ans*10)+digit; 
    n=n/10;
   }
   //123 --> 0*10+3 = 3 -- 3*10+2 = 32 -- 32*10+1=321
   cout << "Reverse number is " << ans << endl;

    return 0;
}
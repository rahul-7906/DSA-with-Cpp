#include <iostream>
using namespace std;

int main(){
   int a,b;
   cout<< "STARTING OUR BASIC CALCUALTOR" <<endl;
   cout<<"Enter value of a and b : ";
   cin>>a>>b;

   char op;
   cout<<"Enter operator : ";
   cin>>op;

   switch(op){
    case '+': cout << "Output is : " << a+b
                   << endl;
                break;

    case '-':cout << " Output is : " << a-b
                   << endl;
                break;

    case '*':cout << " Output is : " << a*b
                   << endl;
                break;

    case '/':cout << " Output is : " << a/b
                   << endl;
                break;

    case '%':cout << " Output is : " << a%b
                   << endl;
                break;
    default : cout<<"Enter a valid operator"<< endl;
   }

    return 0;
}
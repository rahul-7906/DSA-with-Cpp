#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter n : ";
    cin>>n;

    int a =0 ,b=1;
    for(int i = 0;i<=n;i++){
        int nextNum = a+b;
        cout<<nextNum <<" ";

        a=b;
        b=nextNum;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int amount = 1330;

    switch(100){
        case 100:cout<<"100 rs notes are "<< amount/100 <<endl;
                  amount = amount%100;
        case 50: cout<<"50 rs notes are "<<amount/50 <<endl;
                  amount = amount%50;
        case 20: cout<<"20 rs notes are "<<amount/20 <<endl;
                  amount = amount%20;          
        case 1: cout<<"1 rs notes are "<<amount/1 <<endl;
                  amount = amount%1;
    }

    return 0;
}
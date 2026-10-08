// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include <iostream>
using namespace std;

int main(){
    int n =5;
   int row = 1;
   while(row<=n){
        //triangle 1
        int col = 1;
        while(col<=n-row+1){
            cout<<col;
            col++;
        }

        //triangle 2
        int col2=1;
        while(col2<=(2*row-2)){
            cout<< "*";
            col2++;
        }

        //triangle 3 
        int col3=1;
        int start=n-row+1;
        while(col3<=start){
            cout<<start;
            start--;
        }



    cout<<endl;
    row++;
   }

    return 0;
}
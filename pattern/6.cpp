//    *
//   **
//  ***
// ****  

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;

    int row =1;
    while(row<=n){
        //space
        int space =1;
        while(space<=n-row){
          cout<<" ";
          space++;
        }

        //star
        int col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }

        cout<<endl;
        row++;
    }
    return 0;
}
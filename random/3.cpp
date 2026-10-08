#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;

    int row=1;
    while(row<=n){
        //Spaces
        int spaces = row;
        while(spaces){
            cout<<" ";
            spaces--;
        }

        //digits
        int col=1;
        int start=row;
        while(col<=n-row+1){
            cout<<start;
            col++;
            start++;
        }

        cout<<endl;
        row++;

    }

    return 0;
}
//     1
//    121
//   12321
//  1234321
// 123454321

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;

    int i=1;
    while(i<=n){
        // Spaces
        int space =1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }

        //triangle 1
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
       
        //triangle2
        int start = i-1;
        while(start>0){
            cout<<start;
            start--;
        }

        cout<<endl;
        i++;

}
    return 0;
}
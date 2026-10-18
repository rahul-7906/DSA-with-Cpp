#include <iostream>
using namespace std;


int main(){
    int arr[100]={1,2,4,5,7,4,2,1};
    int n=8;
    int count[100]={0};
    
    for(int i=0;i<n;i++){
        int curr=arr[i];
        count[curr]++;
    }

    for(int i=1;i<=n;i++){
        if(count[i]==2){
            cout<< i << " ";    
        }
    }

    //          OR 
    //  for(int i = 0; i < n; i++) {
            //        int curr = arr[i];
            //        count[curr]++;

            //        if(count[curr] == 2) {
            //            cout<< curr << " ";
            //        }
            //    }

    return 0;
}
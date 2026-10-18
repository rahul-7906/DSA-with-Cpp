#include <iostream>
using namespace std;

int peakIndex(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
       if(arr[mid]<arr[mid+1]){
            s=mid+1;
       }
       else{
        e=mid;
       }
       mid=s+(e-s)/2;
    }
    return s;
}
int main(){
   int arr[10]={2,3,5,7,9,11,6,4,2,1};
   int ans = peakIndex(arr,10);
   cout << "Peak index of array is : "<< ans;

    return 0;
}
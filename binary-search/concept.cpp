#include <iostream>
using namespace std;


int binarySearch(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
       if(arr[mid]==key){
          return mid;
       }
       if(key>arr[mid]){
         s=mid+1;
       }
       if(key<arr[mid]){
        e=mid-1;
       }
       mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
   int arr[6]={2,3,4,7,11,18};
   int result = binarySearch(arr,6,15);
   cout<< result <<endl;
    return 0;
}
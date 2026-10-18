#include <iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
   while(s<=e){
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
       ans=mid;
       e=mid-1;
    }
    if(key<arr[mid]){
       e=mid-1;
    }
    if(key>arr[mid]){
        s=mid+1;
    }
    mid=s+(e-s)/2;
   }
    return ans;
}

int lastOcc(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e){
       int mid=s+(e-s)/2;
        if(key==arr[mid]){
          ans=mid;
          s=mid+1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[6]={1,3,3,5,9,11};
    cout<<"First occurence occurs at index "<< firstOcc(arr,6,3) << endl;
    cout<<"Last occurence occurs at index "<< lastOcc(arr,6,3) << endl;

    return 0;
}
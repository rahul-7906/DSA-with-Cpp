#include <iostream>
using namespace std;

int binarySearch(int arr[],int s,int e,int key){
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==key){
           return mid;
        }
        if(arr[mid]>key){
            e=mid-1;
        }
        if(arr[mid]<key){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int findPivot(int arr[],int n){
    int s=0,e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=arr[0]){
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
    int arr[6]={7,9,1,2,3,4};
    int n=6;
    int target = 3;
    int pivot = findPivot(arr,n);
    int ans;
    if(target>=arr[pivot] && target<=arr[n-1]){
        ans = binarySearch(arr,pivot,n-1,target);
    }else{
        ans = binarySearch(arr,0,pivot-1,target);
    }

    cout << "Index of target is "<< ans << endl;
    return 0;
}
#include <iostream>
using namespace std;

int isPossible(int stalls[],int n,int cows,int mid);

int main(){
    int arr[5]={1,2,3,5,6};
    int n = 6;
    int k=2;
     
    int s=0;
    int maxi = -1;
    for(int i=0;i<n;i++){
      maxi= max(maxi,arr[i]);
    }
    int e = maxi;
   
    int mid=s+(e-s)/2;
    while(s<=e){ 
        if(isPossible(arr,n,k,mid)){
            s=mid+1;
            cout << "TRUE";
            return true;
        }
        else{
            e=mid-1;
        }
        cout << "FALSE";
        return false;
        mid=s+(e-s)/2;
    }

    return 0;
}

int isPossible(int stalls[],int n,int cows,int mid){
    
    int cowCount = 1;
    int lastPos = stalls[0];
    for(int i=0;i<n;i++){
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==cows){
                
                return true;
            }
            lastPos = stalls[i];
        }
    }
    
    return false;
}
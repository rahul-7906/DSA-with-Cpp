#include <iostream>
using namespace std;

void insertionSort(int arr[],int n){
    int i=1;
    while(i<n){
     int temp=arr[i];
     int j=i-1;
     while(j>=0){
     if(arr[j]>temp){
        arr[j+1]=arr[j];
     }else{
        break;
     }
        j--;
     }
     arr[j+1]=temp;
        i++;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n=5;
   int arr[5]={4,2,8,5,0};
   insertionSort(arr,n);
   printArray(arr,n);
    return 0;
}
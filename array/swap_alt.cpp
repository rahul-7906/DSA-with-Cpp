#include <iostream>
using namespace std;

void swap_alternate(int arr[],int size){
     for(int i = 0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
     }
}
void print_Array(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i] << " ";
    }
}
int main(){
    int arr[6] = {3,7,5,4,2,1};
    swap_alternate(arr,6);
    print_Array(arr,6);
    return 0;
}
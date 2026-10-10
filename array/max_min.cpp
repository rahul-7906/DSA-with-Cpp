#include <iostream>

using namespace std;

int findMin(int arr[],int size){
  int mini = INT_MAX;
   for(int i = 0;i<=size;i++){
    // if(arr[i]<min){
    //     min = arr[i];
    // }
     
           // ALTERNATIVE
    mini = min(arr[i],mini);

   }
    return mini;
}

int findMax(int arr[],int size){
    int max = INT_MIN;
    for(int i = 0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    cout<<"Enter number of values you want to Enter : ";
    cin>>n;
    int numbers[100];
    
    cout<<"Enter the values : ";
    for(int i = 0;i<n;i++){
        cin>>numbers[i];
    }

    cout<<"Maximum value of array is "<< findMax(numbers,n) <<endl;
    cout<<"Manimum value of array is "<< findMin(numbers,n) <<endl;
    return 0;
}
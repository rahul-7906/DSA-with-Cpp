#include <iostream>
using namespace std;

int find_duplicate(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    return ans;
}

int main(){
      int arr[100]={1,2,2,3,4,5};
      int output = find_duplicate(arr,6);
      cout<<output<<endl;
    return 0;
}
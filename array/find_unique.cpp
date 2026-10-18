#include <iostream>
using namespace std;

int find_unique(int arr[],int size){
     int ans=0;
     for(int i=0;i<size;i++){
        ans=ans^arr[i];
     }
     return ans;
}
int main(){
   int number[100]={2,3,4,4,3,2,1};
    int final = find_unique(number,7);

   cout <<"Unique Element is "<<final<<endl;
    return 0;
}
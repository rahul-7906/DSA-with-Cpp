#include <iostream>

using namespace std;

int main(){
   int arr[100];
   int n;
   int sum = 0;
   printf("Enter number of elements :");
   cin>>n;
   
   printf("Enter values : ");
   for(int i = 0;i<n;i++){
     cin>>arr[i];
    sum+=arr[i];
   }

   for(int i = 0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl<<"sum is " <<sum <<endl;

    return 0;
}
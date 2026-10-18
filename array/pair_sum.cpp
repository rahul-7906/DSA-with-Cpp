#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int>& arr, int target){
      for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==target){
                return {i,j};
            }
        }
      }
      return {-1, -1};
}

int main(){
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;

    vector<int> ans = pairSum(arr, target);
    cout << "Indices: [" << ans[0] << ", " << ans[1] << "]\n";
    
    return 0;
}
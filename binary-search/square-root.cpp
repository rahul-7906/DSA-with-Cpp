#include <iostream>
using namespace std;

int intSquareRoot(int n){
    int s = 0;
    int e = n;
    int ans = -1;
    long long int mid = s + (e - s) / 2; 
    
    while(s <= e){
        long long int square = mid * mid;
        
        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double floatRoot(int n, int prec, int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i < prec; i++){
        factor = factor / 10;
        for(double j = ans; j * j < n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n, precision;
    cout << "Enter number and precision: " << endl;
    cin >> n >> precision;
    
    int tempSol = intSquareRoot(n);
    cout << "Square root in int is " << tempSol << endl;
    
    double result = floatRoot(n, precision, tempSol);
    cout << "Float Square root is " << result << endl;
    
    return 0;
}
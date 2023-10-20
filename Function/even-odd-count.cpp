#include <iostream>
using namespace std;

void countEven(int arr[], int n){
    int e_count = 0;
    int o_count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            e_count++;
        }
        else{
            o_count++;
        }
    }
    cout <<"Even count is: " << e_count <<endl;
    cout <<"Odd count is: " << o_count;
}

int main() {
    
    int arr[] = {1,2,3,4,5,6,7,8,9};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    countEven(arr, n);
    
    return 0;
}

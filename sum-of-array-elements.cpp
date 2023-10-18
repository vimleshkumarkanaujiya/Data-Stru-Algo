#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 5, arr[] = {1,2,3,4,5};
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    
    cout << sum;
    
    return 0;
}

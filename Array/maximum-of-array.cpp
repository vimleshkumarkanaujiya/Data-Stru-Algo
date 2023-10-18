#include <iostream>
using namespace std;

int main() {
    
    int n=6, arr[]={1,4,5,9,19,12};
    int mx = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>mx){
            mx = arr[i];
        }
    }
    cout << mx;
    return 0;
}

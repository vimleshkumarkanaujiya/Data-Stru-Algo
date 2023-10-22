#include <iostream>
using namespace std;

int checkPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void countPrime(int arr[], int n){
    int count_prime = 0;
    for(int i = 0; i<n; i++){
        int flag = checkPrime(arr[i]);
        count_prime += flag;
    }
    cout << "The number of prime numbers in array: " <<count_prime;
}

int main() {
    int arr[] = {2, 3, 4, 11, 13, 19, 21, 17};
    int n = sizeof(arr)/sizeof(int);
    countPrime(arr, n);
}

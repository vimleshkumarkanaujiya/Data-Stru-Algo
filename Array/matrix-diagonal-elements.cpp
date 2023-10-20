#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout <<"The matrix elements are: \n";
        for(int i=0; i<3; i++){
        for(int j=2; j>=0; j--){
                cout << a[i][j] <<" ";
        }
        cout << "\n";
    }
    
    cout <<"-----\n";
    
    cout <<"Principle diagonal elements: ";
    for(int i=0; i<3; i++){
        for(int j=2; j>=0; j--){
            if(i==j){
                cout << a[i][j] <<" ";
            }
        }
    }
    
    cout <<"\n-----\n";
    cout <<"Secondary diagonal elements: ";
    int k=2;
    for(int i=0; i<3; i++){
        cout << a[i][k] << " ";
        k--;
    }
}

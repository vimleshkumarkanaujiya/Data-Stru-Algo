#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int x = 10;
    int flag = 0;
        for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i][j]==x)
            {
                flag = 1;
                cout << "The element " <<x <<" is found" <<endl;
                cout << "The element is found at row " << i <<endl;
                cout << "The element is found at column " << j << endl;
            }
        }
    }
    if(flag==0){
        cout <<"The element doesn't exist" << endl;
    }
}

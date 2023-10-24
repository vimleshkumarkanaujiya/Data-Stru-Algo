#include <iostream>
using namespace std;

void digitSum(int n){
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    // Calculate the sum of the digits
    int originalNumber = n;
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout << "The sum of the digits in " << originalNumber << " is: " << sum << endl;
}

int main() {
    int number;
    digitSum(number);
    return 0;
}

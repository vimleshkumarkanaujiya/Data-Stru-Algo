#include <iostream>
using namespace std;

int sum(int n) {
  int sum = 0;
  for (int i = 0; i <= n; i++) {
    sum = sum + i;
  }
  return sum;
}

int main() {

  int n = 6;
  cout << sum(n);

  return 0;
}

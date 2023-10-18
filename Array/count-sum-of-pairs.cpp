#include <iostream>
using namespace std;

int main() {
  int n = 5, arr[] = {1, 4, 2, 3, 0};
  int value = 5;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == value) {
        sum = sum + 1;
      }
    }
  }
  cout << sum;
  return 0;
}

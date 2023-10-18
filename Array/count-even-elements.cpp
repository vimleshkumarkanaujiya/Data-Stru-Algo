#include <iostream>
using namespace std;

int main() {
  int n = 6, arr[] = {1, 5, 4, 3, 6, 8};
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      count = count + 1;
    }
  }
  cout << count;
  return 0;
}

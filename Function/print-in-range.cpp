#include <iostream>

using namespace std;

void printRange(int start, int end) {
  while (start <= end) {
    cout << start << " ";
    start++;
  }
}

int main() {

  int start = 5;
  int end = 10;

  printRange(start, end);

  return 0;
}

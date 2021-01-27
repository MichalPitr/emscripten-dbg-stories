#include <iostream>

void calcSum(int *x, int length, int &sum) {
  for (int i = 0; i < length; ++i) {
    sum += x[i];
  }
}

int main() {
  int sum = 0, n = 10;
  int x[10];

  /* initialize x */
  for (int i = 0; i < 10; ++i) {
    x[i] = n - i - 1;
  }

  calcSum(x, n, sum);
  std::cerr << sum << "\n";
}

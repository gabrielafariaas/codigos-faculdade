#include <iostream>
using namespace std;

int main() {

  int num, n1 = 0, n2 = 1, fib;

  cout << "Digite o numero:";
  cin >> num;

  for (int c = 0; c < num; c++) {
    if (c <= 1) {
      fib = c;
    } else {
      fib = n1 + n2;
      n1 = n2;
      n2 = fib;
    }
    cout << fib << " \n";
  }

  return 0;
}

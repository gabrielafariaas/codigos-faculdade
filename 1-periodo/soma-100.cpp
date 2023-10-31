#include <iostream>
using namespace std;
int main() {

  int n;
  int soma = 0;

  for (int n = 0; n <= 100; n++) {
    soma = soma + n;
  }
  cout << soma << endl;
  return 0;
}

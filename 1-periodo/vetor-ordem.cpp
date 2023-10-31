#include <iostream>
using namespace std;
void v(int a[], int b) {
  int f;
  for (int i = 0; i < b - 1; i++) {
    if (a[i] < a[i + 1]) {
      f = 1;
    } else {
      f = 0;
      cout << "não está em ordem crescente ";
      break;
    }
  }
  if (f == 1) {
    cout << "está em ordem crescente ";
  }
}
int main() {
  int a[] = {1, 2, 6, 4, 5}, b;
  b = sizeof(a) / sizeof(a[0]);
  v(a, b);
  cout << " \n";
  cout << "os elementos do vetor são: ";
  for (int i = 0; i < b; i++) {
    cout << a[i] << " ";
  }

  return 0;
}

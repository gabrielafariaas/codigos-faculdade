#include <iostream>
using namespace std;
void crescente(int a[], int b) {
  bool f = false;
  for (int i = 0; i < b - 1; i++) {
    if (a[i] < a[i + 1]) {
      f = true;
    } else {
      f = false;
      cout << "não está em ordem crescente ";
      break;
    }
  }
  if (f) {
    cout << "está em ordem crescente ";
  }
}
int main() {
  int a[] = {1, 9, 3, 4, 5, 6, 7}, tam;
  tam = sizeof(a) / sizeof(a[0]);
  crescente(a, tam);
  cout << " \n";
  cout << "os elementos do vetor são: ";
  for (int i : a) {
    cout << i << " ";
  }

  return 0;
}

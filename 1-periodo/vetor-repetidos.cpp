#include <iostream>
#include <vector>
using namespace std;

vector<int> dup(vector<int> v) {
  vector<int> resultado;
  for (int num : v) {
    bool f = true;
    for (int elemento : resultado) {
      if (elemento == num) {
        f = false;
      }
    }
    if (f) {
      resultado.push_back(num);
    }
  }
  return resultado;
}
int main() {
  vector<int> entrada = {1, 2, 2, 3, 4, 4, 5, 5, 6, 1};
  vector<int> saida = dup(entrada);

  cout << "vetor de entrada = { ";
  for (int f : entrada) {
    cout << f << " ";
  }
  cout << "}\n";

  cout << "vetor de saída = { ";
  for (int g : saida) {
    cout << g << " ";
  }
  cout << "}";

  return 0;
}

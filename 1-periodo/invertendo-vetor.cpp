#include <iostream>
using namespace std;
void inverter(int vetor[], int tam) {
  int inicio = 0;
  int fim = tam - 1;

  while (inicio < fim) {
    int temp = vetor[inicio];
    vetor[inicio] = vetor[fim];
    vetor[fim] = temp;
    inicio++;
    fim--;
  }
}

int main() {
  int vetor[] = {1, 2, 3, 4, 5};
  int tam = sizeof(vetor) / sizeof(vetor[0]);

  cout << "Vetor original: ";
  for (int i = 0; i < tam; i++) {
    cout << vetor[i] << " ";
  }
  cout << endl;

  inverter(vetor, tam);

  cout << "Vetor invertido: ";
  for (int i = 0; i < tam; i++) {
    cout << vetor[i] << " ";
  }
  cout << endl;

  return 0;
}

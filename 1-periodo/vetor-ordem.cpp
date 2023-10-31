#include <iostream>

using namespace std;
void b(int vetor[], int tamanho)
{
  for (int i = 0; i < tamanho; i++)
  {

    for (int j = 0; j < tamanho - i - 1; j++)
    {
      if (vetor[j] > vetor[j + 1])
      {
        int temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }
}
int main() {
  int vet[] = {4, 1, 3, 2, 0, 7};
  int tam = sizeof(vet) / sizeof(vet[0]);

  cout<<"vetor original = { ";
  for (int i : vet) {

    cout << i << " ";
  }
  cout<<"}";
  cout << "\n";

  b(vet, tam);
  cout<<"vetor ordenado = { ";
  for (int i : vet) {

    cout << i << " ";
  }
  cout<<"}";
  cout << "\n";
  return 0;
}

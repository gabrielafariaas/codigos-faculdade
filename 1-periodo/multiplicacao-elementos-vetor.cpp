#include <iostream>
#include <vector>
using namespace std;
void multi(int v[], int tam, int mult){


  cout<<" \n";

    for(int n = 0; n < tam; n++)
    {
        v[n] *= mult;
     cout<<v[n] <<" \n";

    }

}
int main (){
  int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int mult, tam;
  tam = sizeof(vetor) / sizeof(vetor[0]);
  cout<<"digite um número para saber a tabuada: ";
  cin>>mult;

  cout<<" \n";
  cout<<"o resultado é: ";
  multi(vetor, tam, mult);

  return 0;
}

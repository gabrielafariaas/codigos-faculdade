#include <iostream>
#include <vector>
using namespace std;

int veve(int v[], int t){
int soma = 0;
    for(int n = 0; n < t; n++)
    {
       soma += v[n];
      cout<<soma <<" ";

    }
    return soma;
}

int main (){
  int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int z = sizeof(vetor) / sizeof(vetor[0]);
  int result = veve(vetor,z);
  cout<<" \n";
  cout<<"os elementos do vetor: ";
  cout<<vetor[0] <<" ";
  cout<<vetor[1] <<" ";
  cout<<vetor[2] <<" ";
  cout<<vetor[3] <<" ";
  cout<<vetor[4] <<" ";
  cout<<vetor[5] <<" ";
  cout<<vetor[6] <<" ";
  cout<<vetor[7] <<" ";
  cout<<vetor[8] <<" ";
  cout<<vetor[9] <<" ";
  cout<<" \n";
  cout<<"o resultado é: " <<result <<endl;

  return 0;
}

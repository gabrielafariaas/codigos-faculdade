#include <iostream>
//#include <vector>
using namespace std;
float med(float vet[], float tam){
 int soma = 0;
  for(int i = 0; i < tam; i++){
    
    soma = soma + vet[i];
    
  }
  float media = soma / tam;
  return media;
}

int main()
{
  float v[]= {5,10,15,20};
  float tam;
tam = sizeof(v)/ sizeof(v[0]);

  cout<<"os elementos do vetor são: ";
  for(int num : v)
    {
      cout<<num <<" ";
    }
 cout<<"\n";
  cout<<"a média dos valores do vetor é: " <<med(v, tam) <<endl;
return 0;
}

#include <iostream>
using namespace std;

void aritmetica (int termo1, int razao, int qntdterm) 
{
  //int am = a1
   int termoatual = termo1;
  // 
  for(int m=0; m<=an;m++)
    {
        am = a1+r;
        a1 = an;
        cout<<an<<" ";
    }
   //
//
    for(int i = 0; i < qntdterm; i++)
    {
        cout<<termoatual <<" ";
        termoatual += razao;
    }
    cout<<endl;
}
int main()
{
    int a1, r, an;
    cout<<"digite o primeiro número da PA: ";
    cin>>a1;
    cout<<"digite a razão da PA: ";
    cin>>r;
    cout<<"digite a quantidade de termos da PA: ";
    cin>>an;
    
    aritmetica(a1,r,an);
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> lista;
    int a, num;
    num = 0;
    
    cout<<"De qual número quer a tabuada? \n";
    cin>>a;
    
    while(lista.size() <= 10)
    {
      lista.push_back(num);
      num = num + a;
    }
    for(int numero : lista)
    {
      cout<<numero <<" \n";
    }
  
    return 0;
}

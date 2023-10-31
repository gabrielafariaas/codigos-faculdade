#include <iostream>
#include <vector>
using namespace std;

int main () {
    
    const int tam = 9;
    int a;
   
    
    cout<<"digite um número para saber o elemento do vetor: \n";
    cin>>a;
    cout<<"\n";
    
    int v1[tam] = {1,2,3,4,5,6,7,8,9};
    int p1 = v1[3];
    int p2 = v1[5];
    int p3 = v1[2];
    int p4 = v1[a];
    
    for (int i = 0; i < tam; i++) 
    
        cout<<v1[i] <<" ";
        cout<<"\n";
        cout<<"\n";
        cout<<"elemento 3 do v1: "<<p1 <<endl;
        cout<<"\n";
        cout<<"elemento 5 do v1: "<<p2 <<endl;
        cout<<"\n";
        cout<<"elemento 2 do v1: "<<p3 <<endl;
        cout<<"\n";
        cout<<"o elemento " <<a <<" do v1: " <<p4 <<endl;
    
    
    
}

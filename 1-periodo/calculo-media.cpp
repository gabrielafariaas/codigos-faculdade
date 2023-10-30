#include <iostream>
using namespace std;

float media (float n, float m)
{
    
    float z = (n+m)/2;
    
    return z;
}
 int main()
 {
     float a , b;
     
     cout<<"digite o primeiro número para obter a média: ";
     cin>>a;
     cout<<"digite o segundo número: ";
     cin>>b;
     cout<<"a média é: " << media(a,b);
     
     
     return 0;
 }

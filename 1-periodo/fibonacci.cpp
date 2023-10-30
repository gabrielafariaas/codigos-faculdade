#include <iostream>
using namespace std;
 
int fibonacci(int n){
 if (n == 1) { 

 return 0;
 } 
 else if (n == 2) { 
     
 return 1; 
 } 
 else {
int pri_termo = 0, seg_termo = 1, prox_termo;
    cout<<"0 1 ";
     for (int i = 3; i <= n; i++){
         prox_termo = pri_termo + seg_termo;
         pri_termo = seg_termo;
         seg_termo = prox_termo;
         cout<<prox_termo <<" ";
        
 }
 cout<<"\n";
 cout << "O " << n << "º termo: ";
 return prox_termo;
 } 
} 

int main() {
 
 int n; 
 cout << "Digite o número de termos da sequência de Fibonacci: ";
 cin >> n;
 cout<<"a soma dos numeros: ";
 cout << "O " << n << "º termo: ";
 cout << fibonacci(n) << "\n"; 

 return 0; 
}

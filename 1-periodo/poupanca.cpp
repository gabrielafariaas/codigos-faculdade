#include <iostream>
using namespace std;
int main() {
  cout << "Moisés, bem-vindo ao app da GBank Poupança \n";

  int i;
  float valor, saldo, poupanca;

  saldo = 1000.00;
  poupanca = 500.00;
  i = 0;

  while (i != 3) {
    cout << "Digite 1 para APLICAR, 2 para RESGATAR e 3 para SAIR: \n";
    cin >> i;

    if (i == 1) {
      cout << "Valor da aplicação: \n";
      cin >> valor;

      if (valor > saldo) {
        cout << "Saldo de conta corrente insuficiente. \n";
        cout << "Digite um novo valor: \n";
        cin >> valor;
      } else {
        saldo = saldo - valor;
        poupanca = poupanca + valor;
        cout << "Aplicação realizada com sucesso. \n";
      }
      cout << "Valor = " << valor << endl;
      cout << "Saldo = " << saldo << endl;
      cout << "Poupança = " << poupanca << endl;
    }
    if (i == 2) {
      cout << "Valor do resgate: \n";
      cin >> valor;

      if (valor > poupanca) {
        cout << "Saldo de poupança insuficiente. \n";
        cout << "Digite um novo valor: \n";
        cin >> valor;
      } else {
        saldo = saldo + valor;
        poupanca = poupanca - valor;
        cout << "Resgate realizado com sucesso. \n";
      }
      cout << "Valor = " << valor << endl;
      cout << "Saldo = " << saldo << endl;
      cout << "Poupança = " << poupanca << endl;
    }
  }
  cout << "Até logo! \n";

  return 0;
}

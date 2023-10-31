#include <iostream>
using namespace std;
float a;
float soma(float b, float c) {
  a = b + c;
  return a;
}
float sub(float b, float c) {
  a = b - c;
  return a;
}
float divi(float b, float c) {

  if (c == 0) {
    cout << "valor invalido!";
  } else {
    a = b / c;
    return a;
  }
}
float multi(float b, float c) {
  a = b * c;
  return a;
}
int main() {
  float m, n;
  char l;

  do {
    cout << " \n";
    cout << "Sejam Bem Vindos a Calculadora Master\n";
    cout << " \n";
    cout << "escolha a operação que deseja realizar!\n para soma digite 'A'\n "
            "para subtração digite 'S'\n para multiplicação digite 'M'\n para "
            "divisão digite 'D': ";
    cin >> l;
    cout << " \n";
    cout << "digite um número: ";
    cin >> n;
    cout << "digite outro número: ";
    cin >> m;
    cout << " \n";

    if (l == 'A' || l == 'a') {
      cout << "O resultado é: " << soma(n, m) << endl;

    } else if (l == 'S' || l == 's') {
      cout << "O resultado é: " << sub(n, m) << endl;
    } else if (l == 'M' || l == 'm') {
      cout << "O resultado é: " << multi(n, m) << endl;
    } else if (l == 'D' || l == 'd') {
      if (m == 0) {
        cout << "valor invalido!" <<endl;
      } else {
        cout << "O resultado é: " << divi(n, m) << endl;
      }

    } else {
      cout << "operação invalida!";
      return 0;
    }

    cout << " \n";
    cout << "deseja continuar a calcular? se sim digite 'S' senão digite 'N'\n";
    cin >> l;

  } while (l == 'S' || l == 's');

  return 0;
}

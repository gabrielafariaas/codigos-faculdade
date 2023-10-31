#include <iostream>

int main() {
  float num1, num2;
  char oper;

  std::cout << "Digite o primeiro número: ";
  std::cin >> num1;

  std::cout << "Digite o operador (+, -, *, /): ";
  std::cin >> oper;

  std::cout << "Digite o segundo número: ";
  std::cin >> num2;

  double resultado;
  switch (oper) {
  case '+':
    resultado = num1 + num2;
    break;
  case '-':
    resultado = num1 - num2;
    break;
  case '*':
    resultado = num1 * num2;
    break;
  case '/':
    if(num2 != 0){
      resultado = num1 / num2;
      break;
    }
    else{
      std::cout << "Operação inválida!" << std::endl;
      return 1;
    }
    
  default:
    std::cout << "Operador inválido!" << std::endl;
    return 1;
  }

  std::cout << "Resultado: " << resultado << std::endl;

  return 0;
}

#include <iostream>

int main()
{
  float num1, num2, resultado;
  bool segue = true;
  char operacao, escolha;

  while(segue)
    {
      std::cout<<"digite o primeiro número: ";
      std::cin>>num1;
      std::cout<<" \n";
      std::cout<<"agora digite a operação que deseja realizar. \n" <<" \n" <<"digite 'A'para adição, 'S'para subtração, 'M'para multiplicação e 'D'para divisão: "; 
      std::cin>>operacao; 
      std::cout<<" \n"; 
      std::cout<<"digite o segundo número: ";
      std::cin>>num2;

      if(operacao == 'A'|| operacao == 'a'){
     resultado = num1 + num2;
      }
      else if(operacao =='S'|| operacao == 's'){
        resultado = num1 - num2;
      }
     else if(operacao == 'M'|| operacao == 'm'){
        resultado = num1 * num2;
      }
      else if(operacao == 'D'|| operacao == 'd'){
        if(num2 != 0){
          resultado = num1 / num2;
        }
        else{
          std::cout<<"Operação invalida!";
        }
      }
      else{
        std::cout<<"Operador invalido!";
        return 0;
      }
     std::cout<<"Operador invalido!";cout<<" \n";
     std::cout<<"Resultado: " <<resultado <<endl;
     std::cout<<" \n";
     std::cout<<"deseja continuar a calcular? digite 'S'para sim e 'N' para não\n"; 
     std::cin>>escolha; 
     std::cout<<" \n"; 
      if(escolha == 'N'|| escolha == 'n'){
        segue = false;
      }
    }
  return 0;
}

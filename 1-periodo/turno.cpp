#include <iostream>
using namespace std;
int main ()
{
  char turno;

  cout << "Nos informe o seu  turno, digite 'M' para matutino, 'V' para vespertino e 'N' para noturno.\n";
  cin >> turno;

  if (turno == 'M' || turno == 'm')
    {
      cout << "Bom dia!";
    }
 
  else if (turno == 'V' || turno == 'v')
    {
      cout << "Boa tarde!";
    }
    
    else if (turno == 'N'|| turno == 'n')
    {
        cout << "Boa noite!";
    }
  else
    {
      cout << "valor inválido!";
    }


  return 0;
}

// C06EX02.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int16_t idade = 25;
  int16_t *pidade = nullptr; // aqui o asterisco esta com um papel de declara��o do ponteiro

  pidade = &idade;

  cout << "IDADE  = " << idade << " | End: = " << &idade;
  cout << endl;
  // *pidade n�o possui o valor 25, ele est� puxando o valor da variavel idade
  // o asterisco em *pidade aqui est� acessando a variavel idade atraves do caminho contido no ponteiro
  cout << "PIDADE = " << *pidade << " | End: = " << &pidade; // &pidade pega justamente o caminho do ponteiro
  cout << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

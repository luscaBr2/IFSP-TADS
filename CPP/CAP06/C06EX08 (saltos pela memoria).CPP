// C06EX08.CPP

#include <iostream>

using namespace std;

int main(void)
{

  int32_t a = 1;
  int32_t *pa = &a;

  cout << "Endereco atual ...............: " << pa << endl;

  *(pa += 10); // modo de saltar pela mem�ria, (pa += 10) salta 10 posi��es, depois pega o conte�do dessa var
  cout << "Proximo endereco a frente ....: " << pa << endl;

  *(pa += 10);
  cout << "Proximo endereco a frente ....: " << pa << endl;

  *(pa -= 10);
  cout << "Endereco anterior para tras ..: " << pa << endl;

  *(pa -= 10);
  cout << "Endereco anterior para tras ..: " << pa << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

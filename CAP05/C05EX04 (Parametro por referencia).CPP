// C05EX04.CPP
// Programa Fatorial

#include <iostream>
using namespace std;

void pausa(void)
{
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

// Esse & ("E" comercial) no fat simboliza que é uma passagem de parâmetro por referencia
// Passagem de parâmetro por valor = apenas ida
//Passagem de parâmetro por referencia = ida e volta
void fatorial(uint16_t n, uint64_t &fat)
{
  uint16_t i;
  fat = 1;
  for (i = 1; i <= n; i++)
    fat *= i;
}

int main(void)
{
  uint16_t x;
  uint64_t y;
  cout << "Calculo de fatorial" << endl;
  cout << "\nEntre um valor inteiro: "; cin >> x;
  cin.ignore(80, '\n');
  fatorial(x, y);
  cout << "\nFatorial de " << x << " = a: " << y << endl;
  pausa();
  return 0;
}

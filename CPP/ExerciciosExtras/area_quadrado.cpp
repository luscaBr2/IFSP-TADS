// Fa�a um Programa que calcule a �rea de um quadrado, em seguida mostre o dobro desta �rea para o usu�rio.

#include <iostream>

using namespace std;

int main(void)
{
    float lado;

    cout << "Entre com o valor do lado do quadrado: ";
    cin >> lado;
    cin.ignore(80, '\n');

    float area = lado * lado;

    cout << "Area do quadrado = " << area << endl;

    cout << "Pressione ENTER para encerrar";
    cin.get();
    return 0;
}

// IMC

// Enunciado:
// Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58


#include <iostream>

using namespace std;

int main(void)
{
    float altura, peso_ideal;

    cout << "Entre o valor de sua altura: ";
    cin >> altura;
    cin.ignore(80, '\n');

    peso_ideal = (72.7 * altura) - 58;

    cout << "Seu peso ideal é " << peso_ideal << " Kg" << endl;

    cout << "Tecle ENTER para encerrar.";
    cin.get();

    return 0;
}

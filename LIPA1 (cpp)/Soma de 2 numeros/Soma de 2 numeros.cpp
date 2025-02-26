#include <iostream>

using namespace std;

int main(void)
{
    int32_t a, b, r;

    cout << "informe valor para <A>: ";
    cin >> a;

    cin.ignore(80, '\n'); // essa função serve para desconsiderar 80 caracteres seguintes do teclado
    // o \n é o acionamento da tecla enter

    // SEMPRE QUE SE USA CIN, TEM QUE USAR IGNORE PARA LIMPAR O BUFFER DO TECLADO

    // buffer é uma região temporária da memória destinada a guardar as informações extraídas do teclado antes de serem processadas

    // Quando se usa cin.getline, o getline limpa o buffer sozinho

    cout << "informe valor para <B>: " ;
    cin >> b;
    cin.ignore(80, '\n');

    r = a + b;

    cout << "Resultado = " << r << endl;
    cout << endl;

    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;
}

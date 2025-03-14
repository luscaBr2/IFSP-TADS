//C02EX010.CPP

#include <iostream>
#include <cmath> //biblioteca matemática, o c++ não possui operador para exponenciação e nem raízes, então usamos essa biblioteca para não fazer o calculo manualmente
                 // TODAS as operações matemáticas estão presentes nessa biblioteca

using namespace std;

const float PI = 3.141592;

int main(void)
{
    float v, h, r;

    cout << "Entre a altura....: ";
    cin >> h;
    cin.ignore(80, '\n');

    cout << "Entre com o raio..: ";
    cin >> r;
    cin.ignore(80, '\n');

    v = h * PI * pow(r, 2);

    cout << "Area do cilindro..: " << v << endl;

    cout << endl; //serve para quebrar a linha
    cout << "Tecle <Enter> para encerrar...";
    cin.get();

    return 0;


}

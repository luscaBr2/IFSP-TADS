//C02EX05.cpp

#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main(void)
{
    wstring nome;

    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    SetConsoleCP(1252);

    wcout << "Olá,\nQual é seu nome? "; //quando usa wstring para apresentar tem que usar wcout
    getline(wcin, nome);
    //ao usar wstring, tem que usar o getline "solto", não associado ao cin

    cout << endl;
    wcout << "Oi " << nome << ", vamos estudar." << endl;
    cout << endl;

    cout << "Tecla <ENTER> para encerrar...";
    cin.get();

    return 0;
}

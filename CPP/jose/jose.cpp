#include <iostream>

int main(void)
{
    std::string nome;

    std::cout << "Entre com seu nome: " << std::endl;
    std::cin >> nome;

    std::cout << "Tecle ENTER para encerrar..." << std::endl;
    std::cin.get();

    std::cout << "Seu nome é " << nome << std::endl;
    }

// MEUSPC.H (suporte para C05EX21)
// Arquivo de cabecalho para namespace
// que se guardam constantes, ?, prot�tipos e namespaces

#include <iostream>

using namespace std;

#ifndef __MEUSPC_H // se n�o estiver definida __MEUSPC_H
#define __MEUSPC_H // ent�o defina

// isso serve para evitar que o m�quina use v�rias vezes o mesmo namespace, inflando a mem�ria
// ent�o se ja estiver definido

namespace testespc
{
   void subTeste(void)
   {
      cout << "Teste no meuspc." << endl;
      cout << endl;
      cout << "Tecle <Enter> para encerrar... ";
      cin.get();
   }
}

#endif // __MEUSPC_H

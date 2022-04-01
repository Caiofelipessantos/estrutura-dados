#include <iostream>
#include <string>

using namespace std;

#include "funcoes.h"

int main() {
    // Implemente os seus testes aqui.
    // Eles não serão avaliados pelo corretor automático
	calculadora(3, 9, '+');
	calculadora(9, 3, '-');
	calculadora(9, 3, '*');
	calculadora(9, 9, '/');
	calculadora(4, 1, '*');
	calculadora(4, 2, '+');
	calculadora(10, 11, '*');
	listaHistorico();
}

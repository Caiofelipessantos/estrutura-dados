#include <iostream>
#include <chrono>
#include <string>

using namespace std;

#include "Recursao.cpp"

int main() {
    // seus testes aqui
    // eles não serão avaliados pelo corretor automático
    Recursao rec;


    cout << rec.fatorial(5) << endl;

    cout << rec.contagemCrescente(10) << endl;

    cout << rec.contagemDecrescente(5) << endl;

    cout << rec.intervaloCrescente(6, 12) << endl;

    cout << rec.intervaloDecrescente(12, 6) << endl;

    cout << rec.paresCrescente(0) << endl;

}

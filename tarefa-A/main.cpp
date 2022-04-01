#include "Pilha.cpp"
#include "string.h"

int main() {
    Pilha minhaPilha;
    int recebeValor;
	
    minhaPilha.empilhar(1);
	minhaPilha.empilhar(2);
	minhaPilha.empilhar(3);
	minhaPilha.empilhar(4);
	minhaPilha.empilhar(5);
	minhaPilha.retornaTopo(recebeValor);
	cout << "valor:  " << recebeValor << endl;
	minhaPilha.inverterOrdem();
	minhaPilha.maiorValor(recebeValor);
	cout << "maior valor: " << recebeValor << endl;
	minhaPilha.menorValor(recebeValor);
	cout << "menor valor: " << recebeValor << endl;
	minhaPilha.media(recebeValor);
	cout << "média: " << recebeValor << endl;
	cout << "Apresentando os valores ímpares: " << endl;
	minhaPilha.impares();
    
	return 0;
}
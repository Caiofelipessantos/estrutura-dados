#include "iostream"
#include "climits"
#include "Pilha.h"

using namespace std;

Pilha::Pilha() {
    contador = 0;
    capacidade = MAX;
}

bool Pilha::vazia() {
    if (contador == 0) {
        return true;
    } else {
        return false;
    }
}

bool Pilha::cheia() {
    if (contador == capacidade) {
        return true;
    } else {
        return false;
    }
}

bool Pilha::empilhar(int valor) {
    if (cheia())
        return false;
    conteudo[contador] = valor;
    contador++;
    return true;
}

bool Pilha::desempilhar(int &valor) {
    if (vazia())
        return false;
    contador--;
    valor = conteudo[contador];
    return true;
}

bool Pilha::retornaTopo(int &valor) {
    if (vazia())
        return false;
    valor = conteudo[contador-1];
    return true;
}

bool Pilha::inverterOrdem() {
    int aux[MAX];
	int j = 0;
	
    if (vazia())
        return false;
    for (int i = contador-1; i >= 0; i--) {
        aux[j] = conteudo[i];
		cout << aux[j] << endl;
        j++;
    }
    return true;
}

bool Pilha::maiorValor(int &valor) {
	int maior = INT_MIN;
	
	if (vazia())
		return false;
	for (auto elemento: conteudo) {
		if (elemento > maior)
			maior = elemento;
	}
	valor = maior;
	return true;
}

bool Pilha::menorValor(int &valor) {
	int menor = INT_MAX;

	if (vazia())
		return false;
	for (auto elemento: conteudo) {
		if (elemento < menor)
			menor = elemento;
	}
	valor = menor;
	return true;
}

bool Pilha::media(int &valor) {
	int soma = 0, media = 0;
	
	if (vazia())
		return false;
	for (auto elemento: conteudo) {
		soma += elemento;	
	}
	media = soma / contador;
	valor = media;
	return true;
}

bool Pilha::impares() {
	int valoresImpares[] = {}, j = 0;
	if (vazia())
		return false;	
	for (auto elemento: conteudo) {
		if (elemento % 2 != 0) {
			valoresImpares[j] = elemento;
			cout << valoresImpares[j] << endl;
			j++;
		}
	}
	return true;
}

bool Pilha::palindromo(string texto) {
	int arrTxt[] = {};
	return true;
}
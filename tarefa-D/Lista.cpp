#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

#include "Lista.h"

Lista::Lista() {
    contador = 0;
    for (int i = 0 ; i < capacidade ; i ++) {
        elementos[i] = 0;
    }
}


bool Lista::vazia() {
    return contador == 0;
}


bool Lista::cheia() {
    return contador == capacidade;
}

string Lista::listar() {
    string ret = "";
    for (int i = 0 ; i < contador; i ++) {
		ret = ret + "[" + to_string(elementos[i]) + "] ";
    }
    return ret;
}

bool Lista::inserir(int p, int x) {
    // Inserção de elemento em determinada posição.
    // Esta posição deve ser um valor entre 1 (primeiro elemento da lista)
    // e último + 1 (após o último elemento da lista).
    // As entradas posteriores ao elemento inserido devem ter suas posições 
    // incrementadas em uma unidade.
    // Seu código aqui
	if (cheia())
		return false;
	else {
		--p;
		if (p < 0 || p > contador)
			return false;
		else {
			if (not elementos[p]) {
				elementos[p] = x;
			} else {
				for (int i = contador; i >= p; i--) {
					//antes de inserir: [2] [3]
					//inserir(1, 1)
					// depois de inserir: [1] [2] [3]
					elementos[i+1] = elementos[i];
				}
				elementos[p] = x;
			}
			contador++;
		}
	}	
    return true;
}

bool Lista::remover(int p, int &x) {
    // Remoção de elemento em determinada posição.
    // Esta posição deve ser um valor entre 1 (primeiro elemento da lista)
    // e último (último elemento da lista).
    // As entradas posteriores ao elemento removido devem ter suas posições 
    // decrementadas em uma unidade.
    // Seu código aqui
	if (vazia())
		return false;
	else {
		--p;
		if (p < 0 || p > contador-1)
			return false;
		else {
			x = elementos[p];
			for (int i = p; i < contador; i++)
				elementos[i] = elementos[i+1];
			contador--;
		}
	}
    return true;
}

bool Lista::retornar(int p, int &x) {
    // Retorna elemento armazenado em determinada posição.
    // Esta posição deve ser um valor entre 1 (primeiro elemento da lista)
    // e último (último elemento da lista).
    // Seu código aqui
	if (vazia())
		return false;
	else {
		--p;
		if (not elementos[p])
			return false;
		else
			x = elementos[p];
	}
    return true;
}

bool Lista::substituir(int p, int x) {
    // Substitui elemento armazenado em determinada posição.
    // Esta posição deve ser um valor entre 1 (primeiro elemento da lista)
    // e último (último elemento da lista).
    // Seu código aqui
	if (vazia())
		return false;
	else {
		--p;
		if (p < 0 || p > contador-1)
			return false;
		else
			elementos[p] = x;
	}	
    return true;
}

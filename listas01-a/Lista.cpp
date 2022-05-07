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
    for (int i = 0 ; i < capacidade ; i ++) {
		if (elementos[i] != 0) {
			ret = ret + "[" + to_string(elementos[i]) + "] ";
		}
    }
    ret = ret;
    return ret;
}

bool Lista::inserir(int p, int x) {
    // Inserção de elemento em determinada posição.
    // Esta posição deve ser um valor entre 1 (primeiro elemento da lista)
    // e último + 1 (após o último elemento da lista).
    // As entradas posteriores ao elemento inserido devem ter suas posições 
    // incrementadas em uma unidade.
    // Seu código aqui
	--p;
	if (p >= 0 && p < capacidade) {
		if (elementos[p] == 0) {
			elementos[p] = x;
			contador++;
		} else {
			substituir(p, x);
		}
	} else {
		return false;
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
	--p;
	if (p >= 0 && p < capacidade) {
		if (elementos[p] != 0) {
			x = elementos[p];
			elementos[p] = 0;
			contador--;
		} else {
			return false;
		}
	} else {
		return false;
	}

    return true;
}

bool Lista::retornar(int p, int &x) {
    // Retorna elemento armazenado em determinada posição.
    // Esta posição deve ser um valor entre 1 (primeiro elemento da lista)
    // e último (último elemento da lista).
    // Seu código aqui
	--p;
	if (p >= 0 && p < capacidade)
		x = elementos[p];
	else
		return false;

    return true;
}

bool Lista::substituir(int p, int x) {
    // Substitui elemento armazenado em determinada posição.
    // Esta posição deve ser um valor entre 1 (primeiro elemento da lista)
    // e último (último elemento da lista).
    // Seu código aqui
	if (vazia())
		return false;
	
	if (p >= 0 && p < capacidade) {
		if (elementos[p] != 0)
			elementos[p] = x;
	} else {
		return false;
	}
	
    return true;
}

#include "Recursao.h"

string Recursao::contagemCrescente(int p) {
    // Receba um valor N e retorne os valores de 1 até N em ordem crescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
	if (p == 0)
		return "";
	string crescente = "";
	if (p == 1)
		return "[" + to_string(p) + "]";
	else
		crescente = contagemCrescente(p-1) + "[" + to_string(p) + "]";
	return crescente;
}

int Recursao::fatorial(int p) {
    // Receba um valor N e efetue o cálculo de seu fatorial;
    // Seu código aqui
	if (p == 0 or p == 1)
		return 1;
	else
		p = p * fatorial(p-1);
	return p;
}

string Recursao::contagemDecrescente(int p) {
    // Receba um valor N e retorne os valores de N até 1 (decrescente);
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
	if (p == 0)
		return "";
	string decrescente = "";
	if (p == 1)
		return  "[" + to_string(p) + "]";
	else
		decrescente = "[" + to_string(p) + "]" + contagemDecrescente(p-1);
	return decrescente;
}


string Recursao::intervaloCrescente(int p, int q) {
    // Receba 2 valores e retorne os valores entre eles em ordem crescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
	if (p > q)
		return "";
	string crescente = "";
	
	if (q == p)
		return "[" + to_string(q) + "]";
	else
		crescente = intervaloCrescente(p, q-1) + "[" + to_string(q) + "]";
	return crescente;
}

string Recursao::intervaloDecrescente(int p, int q) {
    // Receba 2 valores e retorne os valores entre eles em ordem decrescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
	if (p < q)
		return "";
	string decrescente = "";
	if (p == q)
		return "[" + to_string(p) + "]";
	else
		decrescente = "[" + to_string(p) + "]" + intervaloDecrescente(p-1, q);
	return decrescente;
}

string Recursao::paresCrescente(int p) {
    // Receba um valor N par e retorne todos os números pares entre 0 e N em ordem crescente;
    // No formato:
    // -4-3-2-1-
    // Seu código aqui
	string pares = "";
	if (p == 0)
		return "[" + to_string(p) + "]";
	else {
		if (p % 2 == 0)
			pares = paresCrescente(p-2) + "[" + to_string(p) + "]";
	}
	return pares;
}


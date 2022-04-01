
// Defina abaixo uma struct de nome calculo que armazenará:
// - uma variavel inteira de nome a 
// - uma varável caractere de nome operacao
// - uma variavel inteira de nome b
// - uma variavel inteira de nome resultado 
struct calculo {
    int a, b, resultado;
    char operacao;
};

// Defina um vetor com 5 elementos a partir dessa struct para armazenamento do histórico
calculo historico[5];
int contador = 0; //vetor vazio por padrão;


// Implemente a função soma:
int soma(int a, int b) {
    // Seu código aqui:
	return a+b;
}

// Implemente a função subtracao:
int subtracao(int a, int b) {
    // Seu código aqui:
	return a-b;
}

// Implemente a função multiplicacao:
int multiplicacao(int a, int b) {
    // Seu código aqui:
	return a*b;
}

// Implemente a função divisao:
int divisao(int a, int b) {
    // Seu código aqui:
	if (b == 0) {
		return 0;
	}
	return a/b;
}

// Implemente a função calculadora:
int calculadora(int a, int b, char operacao) {
    // Seu código aqui:
	int res;
		
	switch(operacao) {
		case '+':
			res = soma(a, b);
			break;
		case '-':
			res = subtracao(a, b);
			break;
		case '*':
			res = multiplicacao(a, b);
			break;
		case '/':
			if (b == 0) {
				cout << "Impossível dividir por zero!" << endl;
				return 0;
			}
			res = divisao(a, b);
			break;
		default:
			cout << "Operação inválida!" << endl;
			return 0;
	}
	if (contador >= 5) { // se o histórico estiver cheio
	 	for (int i = 0; i < contador; i++) {
	 		historico[i] = historico[i+1]; // historico[0] <- historico[1]; historico[1] <- historico[2]...
	 	}
		contador--;
	}
		historico[contador].a = a;
		historico[contador].b = b;
		historico[contador].operacao = operacao;
		historico[contador].resultado = res;
		contador++;
	
	return res;
}

// Implemente a função limpaHistorico:
int limpaHistorico() {
    // Seu código aqui:
	if (contador == 0)
	{
		cout << "O histórico já está vazio!" << endl;
		return 0;
	}
	contador = 0;
	return 1;
}

// Implemente a função listaHistorico:
string listaHistorico()
{
    // Seu código aqui:
	for (int i = contador-1; i >= 0; i--) {
		cout << historico[i].a << " " << historico[i].operacao << " " << historico[i].b << " = " << historico[i].resultado << "\n";
	}
	return "";
}

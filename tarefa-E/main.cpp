#include "Lista.cpp"

int main() {
	Lista minhaLista;
	int x;

	if (minhaLista.inserir(1, 20))
		cout << minhaLista.listar() << endl;
	else
		cout << "Não inseriu!\n";
	
	if (minhaLista.inserir(2, 40))
		cout << minhaLista.listar() << endl;
	else
		cout << "Não inseriu!\n";

	if (minhaLista.inserir(3, 60))
		cout << minhaLista.listar() << endl;
	else
		cout << "Não inseriu!\n";

	if (minhaLista.inserir(1, 80))
		cout << minhaLista.listar() << endl;
	else
		cout << "Não inseriu!\n";

	if (minhaLista.substituir(2, 98))
		cout << minhaLista.listar() << endl;
	else
		cout << "Não substituiu!\n";

	cout << "Tamanho da lista: " << minhaLista.tamanho() << endl;

	if (minhaLista.retornar(2, x))
		cout << "Valor encontrado: " << x << endl;
	else
		cout << "Não encontrado!\n";
	return 0;
}

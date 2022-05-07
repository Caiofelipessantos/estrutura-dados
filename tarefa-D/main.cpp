#define MAX 5

#include "Lista.cpp"

int main() {

    Lista minhaLista;
	int x;

    if (minhaLista.inserir(2, 3))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";
	
	if (minhaLista.inserir(1, 4))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";

	// if (minhaLista.inserir(3, 0))        
 //        cout << minhaLista.listar() << endl;
 //    else
 //        cout << "Não inseriu!\n";

	if (minhaLista.inserir(2, 5))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";

	if (minhaLista.inserir(1, 7))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";

	if (minhaLista.inserir(2, 8))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";
	
	if (minhaLista.inserir(5, 9))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";

	if (minhaLista.inserir(1, 2))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";

	if (minhaLista.substituir(1, 2))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não substituiu!\n";

	if (minhaLista.remover(5, x)) {
		cout << "removido: " << x << endl;
		cout << minhaLista.listar() << endl;
	} else
		cout << "Não removeu!\n";

	if (minhaLista.remover(5, x)) {
		cout << "removido: " << x << endl;
		cout << minhaLista.listar() << endl;
	} else
		cout << "Não removeu!\n";

	if (minhaLista.retornar(1, x))
		cout << "Valor encontrado: " << x << endl;
	else
		cout << "Não encontrado!\n";
	
	// if (minhaLista.remover(1, x)) {
	// 	cout << "removido: " << x << endl;
	// 	cout << minhaLista.listar() << endl;
	// } else
	// 	cout << "Não removeu!\n";

	// if (minhaLista.remover(2, x)) {
	// 	cout << "removido: " << x << endl;
	// 	cout << minhaLista.listar() << endl;
	// } else
	// 	cout << "Não removeu!\n";

	// if (minhaLista.remover(1, x)) {
	// 	cout << "removido: " << x << endl;
	// 	cout << minhaLista.listar() << endl;
	// } else
	// 	cout << "Não removeu!\n";

	// if (minhaLista.remover(1, x)) {
	// 	cout << "removido: " << x << endl;
	// 	cout << minhaLista.listar() << endl;
	// } else
	// 	cout << "Não removeu!\n";

	// if (minhaLista.remover(1, x)) {
	// 	cout << "removido: " << x << endl;
	// 	cout << minhaLista.listar() << endl;
	// } else
	// 	cout << "Não removeu!\n";

	if (minhaLista.substituir(5, 3))
		cout << minhaLista.listar() << endl;
	else
		cout << "Não substituiu!\n";
	if (minhaLista.retornar(1, x))
		cout << "Valor encontrado: " << x << endl;
	else
		cout << "Não encontrou!\n";
	
    cout << "\n";
}
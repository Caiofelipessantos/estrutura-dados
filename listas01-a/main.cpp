#define MAX 5

#include "Lista.cpp"

int main() {

    Lista minhaLista;
	int x;

    if (minhaLista.inserir(2, 3))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";

	if (minhaLista.inserir(3, 5))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";
	
	if (minhaLista.inserir(4, 7))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";
	
    if (minhaLista.inserir(-1, 3))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";

	if (minhaLista.inserir(5, 8))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";
	
    if (minhaLista.inserir(1, 4))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";

    if (minhaLista.inserir(0, 3))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";
	
	if (minhaLista.inserir(2, 14))        
        cout << minhaLista.listar() << endl;
    else
        cout << "Não inseriu!\n";

	if (minhaLista.remover(2, x)) {
		cout << "Elemento removido: " << x << endl;
		cout << minhaLista.listar() << endl;
	}
	else
		cout << "Não removeu!\n";

	if (minhaLista.retornar(3, x)) {
		cout << "Elemento encontrado: " << x << endl;
	} else
		cout << "Não encontrou!\n";

    cout << "\n";
}
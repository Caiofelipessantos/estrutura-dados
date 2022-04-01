#include "Queue.cpp"

int main(){
	Queue myQueue, auxQueue;
	int y;
	myQueue.enqueue(4);
	myQueue.enqueue(5);
	myQueue.enqueue(9);
	myQueue.enqueue(14);
	myQueue.enqueue(23);
	myQueue.enqueue(37);
	if (myQueue.dequeue(y)) {
		cout << "Removido!" << endl;
	}
	cout << myQueue.list() << endl;
	cout << "Primeiro: " << myQueue.first(y) << endl;
	cout << "Último: " << myQueue.last(y) << endl;
	cout << "Tamanho da fila: " << myQueue.size(y) << endl;
	cout << "Fila reversa: " << myQueue.revert() << endl;
	myQueue.revert(auxQueue);
	cout << "Fila reversa (passando uma fila por referência): " << auxQueue.list() << endl;
	return 0;
}
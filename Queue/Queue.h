#include "iostream"
using namespace std;

class Queue {
	private:
		struct element {
			int value;
			element *next;
			element *prev;
		}; 
		typedef element *Node;
		Node start;
		Node end;
	public:
		Queue();
		bool isEmpty();
		bool isFull();
		bool enqueue(int x);
		bool dequeue(int &x);
		int first(int &x);
		int last(int &x);
		bool empty();
		int size(int &x);
		string revert();
		bool revert(Queue &aux);
		string list();
};
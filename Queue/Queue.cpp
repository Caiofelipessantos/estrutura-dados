#include "Queue.h"

Queue::Queue() {
	start = nullptr;
	end = nullptr;
}

bool Queue::isEmpty() {
	return start == nullptr;
}

bool Queue::isFull() {
	return false;
}

bool Queue::enqueue(int x) {
	Node n;
	n = new element;
	
	if (isFull())
		return false;
	n->value = x;
	if (isEmpty()) {
		n->prev = nullptr;
		start = n;
		end = n;
	} else {
		n->prev = end;
		end->next = n;
		end = n;
	}
	end->next = nullptr;
	return true;
}

bool Queue::dequeue(int &x) {
	Node n;
	
	if (isEmpty())
		return false;
	n = start;
	x = n->value;
	start = start->next;
	start->prev = nullptr;
	delete n;
	if (start == nullptr)
		end = nullptr;
	return true;
}

int Queue::first(int &x) {
	if (isEmpty())
		return 0;
	x = start->value;
	return x;
}

int Queue::last(int &x) {
	if (isEmpty())
		return 0;
	x = end->value;
	return x;
}

bool Queue::empty() {
	int y;
	
	if (isEmpty())
		return false;
	while (dequeue(y))
		dequeue(y);
	return true;
}

string Queue::list() {
	Node n;
	string strList;
	
	n = start;
	while (n != nullptr) {
		strList += to_string(n->value) + "; ";
		n = n->next;
	}
	return strList;
}

int Queue::size(int &x) {
	Node n;
	int count = 0;
	
	if (isEmpty())
		return count;
	n = start;
	while (n != nullptr) {
		count++;
		n = n->next;
	}
	x = count;
	return x;
}

string Queue::revert() {
	Node n;
	string strList = "";

	n = end;
	while (n != nullptr) {
		strList += to_string(n->value) + "; ";
		n = n->prev;
	}
	return strList;
}

bool Queue::revert(Queue &aux) {
	Node n = end;
	while (n != nullptr) {
		aux.enqueue(n->value);
		n = n->prev;
	}
	return true;
}
#include <iostream>
using namespace std;
#include "Node.h"

void push(Node*& head, char value) {
	Node* n = new Node(value);

	if (head == nullptr)
	{
		head = n;
		return;
	}

	n->next = head;

	head = n;
}
void top(Node*& head) {
	cout << head->value;
}
void dislpay(Node*& head) {

	Node* tmp = new Node();

	tmp = head;
	cout << "List:" << endl;

	while (tmp != nullptr)
	{
		cout << tmp->value << " ";

		tmp = tmp->next;
	}
}
void pop(Node* &head){
	cout << "\nDeleting \"" << head->value << "\" value" << endl;
	head = head->next;
}
int main()
{
	Node* node = nullptr;
	for (int i = 0; i < 5; i++)
	{
		push(node, i+65);
	}

	dislpay(node); cout << endl;

	char addVal;
	cout << "\nEnter new value to add: ";
	cin >> addVal;
	push(node, addVal);
	dislpay(node); cout << endl;

	pop(node);
	dislpay(node); cout << endl;

	cout << "\nTop element: ";
	top(node); cout << endl;

	dislpay(node); cout << endl;


}
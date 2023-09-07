#include <iostream>
using namespace std;
#include "Node.h"

void push(Node*& head, string text) {
	Node* n = new Node(text);

	if (head == nullptr)
	{
		head = n;
		return;
	}
	n->next = head;
	head = n;
}
void dislpay(Node*& head) {

	Node* tmp = new Node();
	tmp = head;
	cout << "Text: " << endl;
	while (tmp != nullptr)
	{
		cout << tmp->text << " ";

		tmp = tmp->next;
	}
}
void pop(Node*& head1, Node*& head2) {
	head2 = head1;
	cout << "\nDeleting \"" << head1->text << "\"..." << endl;
	head1 = head1->next;
}
void undo(Node*& head1, Node*& head2) {
	head1 = head2;
	head2 = nullptr;
}
void redo(Node*& head1, Node*& head2){
	head2 = head1;
	head1 = head1->next;
}
int main()
{
	Node* head1 = nullptr;
	Node* head2 = nullptr;

	push(head1, "Hello");
	dislpay(head1); cout << endl;
	cout << "\nUndo "; dislpay(head2); cout << endl;

	pop(head1, head2);
	dislpay(head1); cout << endl;
	cout << "Undo "; dislpay(head2); cout << endl;


	cout << "\nPerforming undo..." << endl;
	undo(head1, head2);
	dislpay(head1);
	cout << "\nUndo "; dislpay(head2); cout << endl;

	cout << "\nPerforming redo..." << endl;
	redo(head1, head2);
	dislpay(head1);
	cout << "\nUndo "; dislpay(head2); cout << endl;

	cout << "\n---New text---\n" << endl;
	push(head1, "Hello world");
	dislpay(head1); cout << endl;
	cout << "\nUndo "; dislpay(head2); cout << endl;

	pop(head1, head2);
	dislpay(head1); cout << endl;
	cout << "Undo "; dislpay(head2); cout << endl;


	cout << "\nPerforming undo..." << endl;
	undo(head1, head2);
	dislpay(head1);
	cout << "\nUndo "; dislpay(head2); cout << endl;

	cout << "\nPerforming redo..." << endl;
	redo(head1, head2);
	dislpay(head1);
	cout << "\nUndo "; dislpay(head2); cout << endl;


}
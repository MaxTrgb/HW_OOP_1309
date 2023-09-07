#include "Node.h"
Node::Node() {
	value = 0;
	next = nullptr;
}
Node::Node(char value) {
	this->value = value;
	next = nullptr;
}
Node::Node(char value, Node* next) {
	this->value = value;
	this->next = next;
}

#pragma once
class Node
{
public:
	char value;
	Node* next;

	Node();
	Node(char value);
	Node(char value, Node* next);

};
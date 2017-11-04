#include "Node.h"
#include<string>
#include<iostream>

Node::Node()
{
}

Node::Node(const string word, const Node* source)
{
	// Constructor for the node class.
	data = word;
	p = source->p; // Point p at source address.
}

void Node::insert(string value)
{
	Node* temp = new Node;
	temp->data = value;
	temp->p = p;
	p = temp;
}

string Node::getData()
{
	return data;
}

Node * Node::getP()
{
	return p;
}


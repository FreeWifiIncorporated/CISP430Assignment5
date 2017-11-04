#include "Node.h"
#include<string>
#include<iostream>

Node::Node(const string word, const Node* source)
{
	// Constructor for the node class.
	data = word;
	p = source->p; // Point p at source address.
}

string Node::getData()
{
	return data;
}

Node * Node::getP()
{
	return p;
}


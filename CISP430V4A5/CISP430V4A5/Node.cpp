// Christos Papadopoulos
// Node.cpp

// Implementation file for the node class header file. 
#include "Node.h"
#include<string>
#include<iostream>

Node::Node( string word, Node* p)
{
	// Constructor for the node class.
	this->data = word;
	this->p = p; // Point p at source address.
}

string Node::getData()
{

	// Returns the value stored in the current node.
	return data;
}

Node * Node::link()
{
	// Returns the address of the next node.
	return p;
}


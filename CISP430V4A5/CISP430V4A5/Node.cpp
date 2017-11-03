#include "Node.h"
#include "Permutation.h"

Node::Node()
{
}

Node::Node(const string word, const Node* source)
{
	// Constructor for the node class.
	data = word;
	p = source->p; // Point p at source address.
}

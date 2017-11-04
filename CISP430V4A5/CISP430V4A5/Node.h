/*
	Nathan Yarrison
	CISP 430
	Assignment 5
	11/1/2017
*/
// Header file for the node class used by the permute class in the permutation file.

#ifndef Node_H
#define Node_H
#include<cstdlib>
#include<string>

using namespace std;
class Node
{
public:
	Node(const string word, const Node* source); // Node constructor.
	string getData();
	Node* getP();
private:
	string data; // Holds the completed string for the current permutation.
	Node* p; // Points to the next node in the 
};
#endif

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
	Node(string word, Node* p); // Node constructor.
	string getData(); // Function to return the value of data for the current node.
	Node* link(); // Function to return the address of the next node in the list.
private:
	string data; // Holds the completed string for the current permutation.
	Node* p; // Points to the next node in the list.
};
#endif

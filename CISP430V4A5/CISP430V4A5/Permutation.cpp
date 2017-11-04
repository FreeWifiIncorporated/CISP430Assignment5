#include<cstdlib>
#include<string>
#include "Permutation.h"
#include "Node.h"

using namespace std;

Permute::Permute(string wordOne, string wordTwo)
{
	// Constructor for the permute class.
	// Initializes the private data members.
	firstString = wordOne; // wordOne is the first word sent over so it is assigned to firstString.
	secondString = wordTwo; // wordTwo is the second word sent over so it is assigned to secondString.
	total = 0; // As of now, there are no permutations so the total is 0.
	firstNode = NULL; // The pointer to the first node is set to NULL.
	lastNode = NULL; // The pointer to the last node is set to NULL.
}

void Permute::permutation(string firstWord, Node currentNode)
{
	// Function to permute (mix up) the letters in the words provided by the user/driver function.
	// Only the first word is actually permuted, the second word is appended to every permutation of the first word.
	// Calls itself to complete task until all permutations have been found.

	string tempString = firstWord;
	int wordLength = firstWord.length();

	for (int i = 0; i < wordLength; ++i)
	{
		swap((tempString[i]), (tempString[wordLength - i]));
		tempString.append(secondString);
		Node newNode(tempString, currentNode);
		permutation(tempString, newNode);
	}

}

void Permute::print()
{
	// Function to print every permutation of the given words.
	// If the total is less than 100, print in 4 columns.
	// If the total is greater than or equal to 100, print in 9 columns.

	// Check if total is greater than 100.
	if (total < 100)
	{
		// If it is, display nodes in rows of four.
		int numberInRow = 0; // Keeps track of how many nodes have been displayed in the current row.

		cout >> firstNode.data

	}
}
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

void Permute::permutation()
{
	// Function to permute (mix up) the letters in the words provided by the user/driver function.
	// Only the first word is actually permuted, the second word is appended to every permutation of the first word.
	// Calls itself to complete task until all permutations have been found.

	if (total == 0)
	{
		lastNode = firstNode;
		string tempString = firstString;
		int wordLength = firstString.length();

		for (int i = 0; i <= wordLength; ++i)
		{
			++total;
			swap((tempString[i]), (tempString[wordLength - i]));
			tempString.append(secondString);
			firstNode->insert(tempString);
			permutation();
		}
	}
	else
	{
		Node* temp = new Node;
		temp = lastNode;
	}
}

void Permute::print()
{
	// Function to print every permutation of the given words.
	// If the total is less than 100, print in 4 columns.
	// If the total is greater than or equal to 100, print in 9 columns.

	int numberInRow = 0; // Keeps track of how many nodes have been displayed in the current row.
	Node* temp;
	temp = firstNode;

	// Check if total is greater than 100.
	if (total < 100)
	{
		// If it is, display nodes in rows of four.

		while (temp <= lastNode)
		{
			string data = temp->getData();
			temp = temp->getP();

			if (numberInRow != 4)
			{
				cout << data << " ";
				++numberInRow;
			}
			else
			{
				cout << endl << data << " ";
				numberInRow = 1;
			}
		}
	}
	else
	{
		// The total is greater than 100, display nodes in rows of nine.
		while (temp <= lastNode)
		{
			string data = temp->getData();
			temp = temp->getP();

			if (numberInRow != 9)
			{
				cout << data << " ";
				++numberInRow;
			}
			else
			{
				cout << endl << data << " ";
				numberInRow = 1;
			}
		}
	}
}

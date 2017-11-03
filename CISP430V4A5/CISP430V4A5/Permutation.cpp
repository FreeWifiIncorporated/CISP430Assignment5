#include<cstdlib>
#include "Permutation.h"
#include "Node.h"

using namespace std;

Permute::Permute(string wordOne, string wordTwo)
{
	// Constructor for the permute class.
	// Initializes the private data members.
	firstString = wordOne; // wordOne is the first word sent over so it is assigned to firstString.
	secondString = wordOne; // wordTwo is the second word sent over so it is assigned to secondString.
	total = 0; // As of now, there are no permutations so the total is 0.
	firstNode = NULL; // The pointer to the first node is set to NULL.
	lastNode = NULL; // The pointer to the last node is set to NULL.
}

void Permute::permutation()
{
	// Function to permute (mix up) the letters in the words provided by the user/driver function.
	// Only the first word is actually permuted, the second word is appended to every permutation of the first word.
	// Calls itself to complete task until all permutations have been found.

	// Mix up first word.
	if (total == 0)
	{
		string tempString = firstString; // Creates a temporary string to hold a workable copy of the firstString.
		int wordLength = tempString.length(); // Creates a variable to hold the length of the first word (specifically temp).

		for (int i = 0; i < wordLength; ++i)
		{
			// Flips value of first string.
			swap((tempString[i]), (tempString[wordLength - i]));
		}

		tempString.append(secondString);

		if (wordLength == 1)
		{
			// There was only one letter in the first word so no more permutation is needed.
			Node listOfPermutations(tempString, firstNode);
			++total;
			return;
		}
		else
		{
			// There was more that one letter in the first word and more permutation is needed.
			Node listOfPermutations(tempString, firstNode);
			++total;
			permutation();
		}
	}
	else
	{

	}
}

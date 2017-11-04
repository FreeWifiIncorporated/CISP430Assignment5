// Christos Papadopoulos
// Permutation.cpp

// Implementation file for the permute class in the permutation file.
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

	permutation();
}

Permute::~Permute()
{ //since we dynamically allocate memory
  //via a linked list to store strings,
  //a destructor is necessary
	Node *previous,
		*current = firstNode;

	while (current != NULL)
	{ //iterate through list
		previous = current; //temporarily store to-be-deleted node
		current = current->link(); //advance in list
		delete previous; //delete last node
	}
}

void Permute::permutation()
{
	// Function to permute (mix up) the letters in the words provided by the user/driver function.
	// Only the first word is actually permuted, the second word is appended to every permutation of the first word.
	// Calls itself to complete task until all permutations have been found.
	if (total > 0) //if total isn't 0, then we have already generated the permutations
	{
		return;
	}
	else if (firstString == "" && secondString == "")
	{
		return; // If the strings are empty, there is no need for any permutations.
	}
	else
	{
		// Else, call the permutation(int) to complete permutations recursively.
		permutation(0);
	}
	
}

void Permute::swap(int c1, int c2)
{ 
	// Function to exchange the location of two characters in a string
 
	char temp = firstString[c1]; // Store a copy of the first character.
	firstString[c1] = firstString[c2]; // Assign value of second character to the location of the first character.
	firstString[c2] = temp; // Assign the value of the first character to the location of the second character.
}

void Permute::permutation(int currentPosition)
{ 
	// Function to mix up the letters of the first string and store every possible combination in a linked list.
	if (currentPosition == firstString.length()) //if all swaps in loop performed
	{ 
		// Then no longer need to permutate.
		firstNode = new Node(firstString, firstNode); // Attach string to the linked list.
		if (total == 0)
		{
			lastNode = firstNode; //set last node on first entry
		}
		total++;
	}
	else //else, continue generating permutations
	{
		for (int i = currentPosition; i < firstString.length(); i++) //for all possible characters in currentPosition
		{
			swap(currentPosition, i); //try next possible character
			permutation(currentPosition + 1); //continue all the way to end of string
			swap(currentPosition, i); //once we have reached the end,
		}							//undo last swap and return to last nest
	}								//then try a further character swap for currentPos
}

void Permute::print()
{
	// Function to print every permutation of the given words.
	// If the total is less than 100, print in 4 columns.
	// If the total is greater than or equal to 100, print in 9 columns.

	Node *iter = firstNode; //iterator for traversing list

							//print header for object
	cout << "String 1 for this object is: " << firstString << endl;
	cout << "String 2 for this object is: " << secondString << endl;
	if (total > 0)
	{
		cout << "The total possible permutation is " << total << endl;
		if (total == 1)
		{
			cout << "That is:"; //use correct grammar
		}
		else
		{
			cout << "They are:";
		}
	}
	else
	{ 
		//if total is 0
		cout << "There is no permutation." << endl;
	}

	//proceed to print out permutation list
	//print 4 per row if total < 100, otherwise 9
	short perRow = ((total < 100) ? 4 : 9);
	int count = -1;
	while (iter != NULL) //until end of list
	{
		count++;
		//insert new line on 4th / 9th entry
		if ((count % perRow) == 0) cout << endl;
		//80 is default console character width --just using tab now
		cout << iter->getData() << secondString << '\t'; //print permutation

		iter = iter->link(); //advance list
	}
}

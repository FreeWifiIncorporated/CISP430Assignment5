// Christos Papadopoulos
// Permutation.h

// This is the header file that will contain the permutation class and the node class.
// These will be used by the driver file to show all possible combinations of the letters
// of two words. 
// Precondition: The driver file will acquire two words from the user. Either of which (or both) can be nothing at all.
// Postcondition: The class will correctly combine and mix up the user input. The first word will be mixed up and the second will be appended to it.

/* CONSTRUCTOR for the Permutation class:
		Permutation(string wordOne, string wordTwo)
		Postcondition: the words input by user/given from driver will be stored in the classes string data members.
*/

/* void permutation()
		Postcondition: Starts the permutation process. The letters in the words will be mixed up in the appropriate manner and stored in a linked list.
		The first word is the only word to actually have its letters mixed up, the second is just appended to the end.
		Calls itself to perform task until task is accomplished.
*/

/* void swap(int c1, int c2)
		Postcondition: The positions of the two given characters in the first string will be swapped.
*/

/* void permutation(int currentPosition)
		Postcondition: Recursively continues the permutation process. All possible permuations have been found and stored in a linked list.
*/

/* void print()
		Postcondtion: The results of the permutation will be displayed to the user along with the total number of permutations and
		the given strings.
*/

/* void print()
		Postcondition: The linked list of the permutated words is printed for the user to see.
		Calls itself until each node in linked list has been printed to the user.
*/

#ifndef Permutation_H
#define Permutation_H
#include<iostream>
#include<cstdlib>
#include<string>
#include"Node.h"

using namespace std;

class Permute
{
public:
	Permute(string wordOne, string wordTwo);
	~Permute();
	void permutation();
	void swap(int c1, int c2);
	void permutation(int currentPosition);
	void print();
private:
	string firstString;
	string secondString;
	int total;
	Node* firstNode;
	Node* lastNode;
};

#endif
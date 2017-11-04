// Christos Papadopoulos
// CISP430V4A5.cpp

// Driver file for the permutation header file.

#include "Node.h"
#include "Permutation.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Permute perm1("", "");
	perm1.print();
	cout << endl << endl;

	Permute perm2("", "CATMAN");
	perm2.print();
	cout << endl << endl;

	Permute perm3("C", "ATMAN");
	perm3.print();
	cout << endl << endl;

	Permute perm4("CA", "TMAN");
	perm4.print();
	cout << endl << endl;

	Permute perm5("CAT", "MAN");
	perm5.print();
	cout << endl << endl;

	Permute perm6("CATM", "AN");
	perm6.print();
	cout << endl << endl;

	Permute perm7("CATMA", "N");
	perm7.print();
	cout << endl << endl;

	Permute perm8("CATMAN", "");
	perm8.print();
	cout << endl << endl;

	system("pause");
	return 0;
}
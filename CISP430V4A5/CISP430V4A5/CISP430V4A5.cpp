#include "Node.h"
#include "Permutation.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Permute *perm[] = {
		new Permute("", ""),
		new Permute("", "CATMAN"),
		new Permute("C", "ATMAN"),
		new Permute("CA", "TMAN"),
		new Permute("CAT", "MAN"),
		new Permute("CATM", "AN"),
		new Permute("CATMA", "N"),
		new Permute("CATMAN", "")
	};

	for (int i = 0; i < 8; i++)
	{
		perm[i]->print();
		cout << endl << endl;
	}

	System("pause");
	return 0;
}
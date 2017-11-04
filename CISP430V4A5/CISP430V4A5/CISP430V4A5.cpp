/*
	Nathan Yarrison
	CISP 430
	Assignment 5
	11/1/2017
*/
// Driver file for the permutation header file.

#include "Node.h"
#include "Permutation.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Permute perm1("", "");

	perm1.permutation();

	perm1.print();
	cout << endl << endl;

	system("pause");
	return 0;
}
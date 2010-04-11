//============================================================================
// Name        : readRec.cpp
// Author      : Kbe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <stdio.h>
#include <wfdb/wfdb.h>

int main(int argc, char *argv[])
{
	char record[100];
	WFDB_Sample v[2];
	WFDB_Siginfo s[2];

	if (argc < 2) {
		strcpy(record, "100s");
	} else
	{
		strcpy(record, argv[1]);
	}

	cout << "Printing signal record : " << record << endl;

	if (isigopen(record, s, 2) < 2)
	{
		cout << "Could not read record : " << record << endl;
	}
	else
	{
		while  (getvec(v) > 0) {
			printf("%d\t%d\n", v[0], v[1]);
		}
	}

    wfdbquit();

	return 0;
}

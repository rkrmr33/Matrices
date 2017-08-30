// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "matrices.h"
#include <iostream>

int main()
{

	Matrix* a = new Matrix(2, 2);
	a->Assign();
	a->Print();
	a->GaussianElimination(a);



	delete a;

    return 0;
}


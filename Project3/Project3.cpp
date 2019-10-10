#include<iostream>
#include "ins_rem.h";

using namespace std;


double* ptr_to_cube_of(double x)
{
	double* cube = new double;
	*cube = x * x * x;
	return cube;
}

int main()
{
	int* array = new int[5];

	for (size_t i = 0; i < 5; i++)
	{
		array[i] = i;
	}

	
	int array_len = 5;
	int pos = 3;
	int val = 7;

	insert(array, array_len, pos, val);

	for (size_t i = 0; i < 6; i++)
	{
		cout << array[i] << endl;
	}

	cout << endl << endl;

	remove(array, array_len, pos);

	for (size_t i = 0; i < 4; i++)
	{
		cout << array[i] << endl;
	}

	double* px3 = ptr_to_cube_of(3.0);
	cout << *px3 << endl;


	return 0;
}
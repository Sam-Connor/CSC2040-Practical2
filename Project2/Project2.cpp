#include <iostream>

using namespace std;

double* ptr_to_cube_of(double x)
{
	double cube = x * x * x;
	return &cube;
}

int main()
{

	int i = 27;
	int* i_ptr = &i;
	cout << "value in i is " << i << endl;
	cout << "address of i is " << i_ptr << endl;
	cout << "value from dereferencing pointer is " << *i_ptr << endl;

	*i_ptr = 35;
	cout << "value in i is " << i << endl;

	double* d_ptr = NULL;
	cout << "value in pointer is " << d_ptr << endl;

	if (d_ptr != NULL)* d_ptr = 0.25;

	//i and *i_ptr are the same as *i_ptr is a pointer pointed towards the location of i.
	//i_ptr and *i_ptr are different as i_ptr is the address in memory of the pointer, *i_ptr is the value at that address.



	int x = 10;
	int* p = &x;
	
	cout << *p << endl;



	int array[10];
	int* p2 = array;
	for (int i = 0; i < 10; i++)
	{
		*p2++ = i * i;
		cout << array[i] << endl;
	}

	cout << endl << endl;

	double* px3 = ptr_to_cube_of(3.0);



	cout << *px3 << endl;


	return 0;
}
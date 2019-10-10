#include <iostream>
#include <string>

using namespace std;

int main()
{

	int sample[10];

	for (int t = 0; t < 10; t++)
	{
		sample[t] = t;
	}

	for (int t = 0; t < 10; t++)
	{
		cout << "This is sample [" << t << "]: " << sample[t] << endl;
		cout << endl;
	}

	char sample2[20] = "This is a test.";

	cout << sample2 << endl;

	int* p = sample;

	for (int t = 0; t < 10; t++)
	{
		*p++ = t * t;
	}

	p = sample;

	for (int t = 0; t < 10; t++)
	{
		cout << "This is sample [" << t << "]: " << *p++ << endl;
	}
	return 0;
}
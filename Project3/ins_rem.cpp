#include "ins_rem.h";
#include <iostream>
using namespace std;

void insert(int* &array, int &array_len, int pos, int val)
{
	if (array != NULL)
	{
		if (pos >= 0 && pos < array_len)
		{
			array_len += 1;

			int* newArray = new int[array_len];

			for (int i = 0; i < pos; i++)
			{
				newArray[i] = array[i];
			}

			newArray[pos] = val;

			for (int i = pos+1; i < array_len; i++)
			{
				newArray[i] = array[i-1];
			}

			delete[] array;

			array = newArray;

		}
	}
		
}
void remove(int* &array, int &array_len, int pos){	if (array != NULL)
	{		if (pos >= 0 && pos < array_len)
		{
			array_len -= 1;

			int* newArray = new int[array_len];

			for (int i = 0; i < pos; i++)
			{
				newArray[i] = array[i];
			}

			

			for (int i = pos + 1; i < array_len; i++)
			{
				newArray[i-1] = *(array+i);
			}

			delete[] array;

			array = newArray;

		}	}}


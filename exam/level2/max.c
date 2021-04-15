/*
======================================./2-1-max.txt=============================
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
================================================================================
*/

int max(int *tab, unsigned int len)
{
	int max_num = 0;
	for (int i = 0; i < len; i++)
	{
		if (tab[i] > max_num)
			max_num = tab[i];
	}
	return max_num;
}

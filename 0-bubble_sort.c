#include "sort.h"

/**
 * bubble_sort - Sorts an array using Bubble Sort
 * @array: The array to sort
 * @size: Size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	int i, j, intsize;
	int temp;

	intsize = size;
	if (intsize < 2 || array == NULL)
		return;
	for (i = 0; i < intsize - 1; i++)
	{
		for (j = 0; j < intsize - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] =  temp;
				print_array(array, size);
			}
	}
}

#include "sort.h"

/**
 * bubble_sort - Sorts an array using Bubble Sort
 * @array: The array to sort
 * @size: Size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int flag = 0;
	int temp;

	if (size < 2 || array == NULL)
		return;
	while (array && i < size - 1)
	{
		flag = 0;
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			print_array(array, size);
			flag = 1;
		}
		if (flag == 0)
			i++;
		else
			i = 0;
	}
}

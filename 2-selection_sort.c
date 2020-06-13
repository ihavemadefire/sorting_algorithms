#include "sort.h"

/**
 * selection_sort - Sorts through selection
 * @array: Array to sort
 * @size: Size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t counter = 0, index, temp;

	if (size < 2)
		return;
	while (counter < size)
	{
		index = find_smallest(array, counter, size);
		if (index != counter)
		{
			temp = array[counter];
			array[counter] = array[index];
			array[index] = temp;
			print_array(array, size);
		}
		counter += 1;
	}
}

/**
 * find_smallest - Finds the smallest in an array after index
 * @array: Array to search
 * @index: Index to search AFTER
 * @size: Size of the array
 * Return: The index of the smallest
 */

size_t find_smallest(int *array, size_t index, size_t size)
{
	int current = array[index];
	size_t new_index = index;

	while (index < size)
	{
		if (array[index] < current)
		{
			current = array[index];
			new_index = index;
		}
		index += 1;
	}
	return (new_index);
}

#include "sort.h"
/**
 * quick_sort - performs a quick sort
 * @array: Array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int low, high;

	low = 0;
	high = ((int)size - 1);
	quick_sort_rec(array, low, high, size);
}
/**
 * quick_sort_rec - performs a quick sort, but recursively this time
 * @array: Array to be sorted
 * @low: low value
 * @high: high value
 * @size: size of array
*/
void quick_sort_rec(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto(array, low, high, size);
		quick_sort_rec(array, low, pivot - 1, size);
		quick_sort_rec(array, pivot + 1, high, size);
	}
}
/**
 * lomuto - rises from the deep to challenge Godzilla
 * @array: Array to be sorted
 * @low: low value
 * @high: high value
 * @size: size of array
 * Return: Pivot
 */
int lomuto(int *array, int low, int high, size_t size)
{
	int i, j, pivot;

	pivot = array[high];
	i = (low - 1);
	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				flip(array, i, j, size);
			}
		}
	}
	if (i + 1 != high)
		flip(array, i + 1, high, size);
	return (i + 1);
}


/**
 * flip - switch two values in an array
 * @array: Array to be sorted
 * @a: low value
 * @b: high value
 * @size: size of array
 */
void flip(int *array, int a, int b, size_t size)
{
	int temp = array[a];

	array[a] = array[b];
	array[b] = temp;
	print_array(array, size);
}

#include "sort.h"

/**
 * counting_sort - Uses counting sort on an array
 * @array: The array
 * @size: Size of the array
 * Return: VOID
 **/

void counting_sort(int *array, size_t size)
{
    int *count_array;
    int max;

    if (array == NULL || size < 2)
        return;

    max = find_max(array, size);
    count_array = malloc(max + 1);

}

int find_max(int *array, size_t size)
{
    size_t count;
    int max;

    max = array[0];
    for (count = 0; count < size; count++)
    {
        if (max < array[count])
            max = array[count];
    }
    return (max);
}

int *make_count_array(int *array, int *count_array, size_t size)
{
    size_t count;
}

#include "sort.h"

/**
 * selection_sort - sort an array of integers in ascending order
 *
 * @array: array
 *
 * @size: size
 */

void selection_sort(int *array, size_t size)
{
	size_t i, k, min;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (k = i + 1; k < size; k++)
		{
			if (array[k] < array[min])
			min = k;
		}

		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}

#include "sort.h"

/**
 * bubble_sort - sort array of integers in ascending order
 * @array: array
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, k;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (k = 0; k < size - 1 - i; k++)
		{
			if (array[k] > array[k + 1])
			{
				tmp = array[k + 1];
				array[k + 1] = array[k];
				array[k] = tmp;

				print_array(array, size);
			}
		}
	}
}

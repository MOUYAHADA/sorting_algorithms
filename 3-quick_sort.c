#include "sort.h"

/**
 * quick_sort - sort an array of integers in ascending order
 * @array: array to sort
 * @size: size of the array
 */


void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_recursion(array, 0, size - 1, size);
}


/**
 * quick_sort_recursion - sort an array of integers in ascending order
 * @array: array to sort
 * @size: size of the array
 * @low: low index
 * @high: high index
 */


void quick_sort_recursion(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_recursion(array, low, pivot - 1, size);
		quick_sort_recursion(array, pivot + 1, high, size);
	}
}


/**
 * partition - sort an array of integers in ascending order
 *
 * @array: array to sort
 * @size: size of the array
 * @low: low index
 * @high: high index
 */


int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, k, tmp;

	for (k = low; k <= high - 1; k++)
	{
		if (array[k] <= pivot)
		{
			i++;
			if (i != k)
			{
				tmp = array[i];
				array[i] = array[k];
				array[k] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[high])
	{
		tmp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}

	return (i + 1);
}

#include "sort.h"

/**
 * swap - Swap two integers in an array.
 * @first: The first integer to swap.
 * @second: The second integer to swap.
 */
void swap(int *first, int *second)
{
	int tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
}

/**
 * selection_sort - swaps in order by comparing from marker
 * @array: the array
 * @size: array length size
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap(array + i, min);
			print_array(array, size);
		}
	}
}

#include "sort.h"

/**
 * bubble_sort - sort by comparing two values ata a time
 * @array: array
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int sorted = 1;

	size_t i;

	if (size < 2)
		return;

	while (sorted == 1)
	{
		sorted = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				array[i] += array[i + 1];
				array[i + 1] = array[i] - array[i + 1];
				array[i] -= array[i + 1];
				print_array(array, size);
				sorted = 1;
			}
		}
	}
}

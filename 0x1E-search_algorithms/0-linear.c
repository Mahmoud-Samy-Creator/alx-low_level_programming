#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array by Linear search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: The value located
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);

	for (i = 0 ; i < (int)size ; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}

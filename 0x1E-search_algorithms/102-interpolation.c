#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an array by interpolation search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: The value located
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, pos, high;

	if (!array)
		return (-1);

	low = 0;
	high = (int)size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;

		if (array[pos] > value)
			high = pos - 1;
	}

	pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%d] is out of range\n", pos);

	return (-1);
}

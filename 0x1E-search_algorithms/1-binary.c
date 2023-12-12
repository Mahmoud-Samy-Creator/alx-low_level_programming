#include "search_algos.h"
#include <stdlib.h>
/**
 * binary_search - Searches for a value in an array by Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: The value located
 */

int binary_search(int *array, size_t size, int value)
{
	int left, right, middle, counter;

	if (!array)
		return (-1);

	left = 0;
	right = (int)size - 1;

	while (left <= right)
	{
		middle = (left + right) / 2;

		printf("Searching in array: ");
		for (counter = left ; counter <= right ; counter++)
		{
			printf("%d", array[counter]);
			if (counter != right)
				printf(", ");
		}
		printf("\n");

		if (middle == value)
			return (middle);

		if (array[middle] < value)
		{
			left = middle + 1;
		}

		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}

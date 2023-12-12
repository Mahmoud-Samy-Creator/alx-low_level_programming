#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Searches for a value in an array by Linear search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: The value located
 */
int jump_search(int *array, size_t size, int value)
{
	int start, end, counter;

	if (!array)
		return (-1);

	start = 0;
	end = sqrt((int)size);

	while (array[end] < value && start < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);

		start = end;
		end += sqrt((int)size); 

		if (end >= (int)size)
			break;
	}

	printf("Value checked array[%d] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%d] and [%d]\n", start, end);

	if (end > (int)size - 1)
	{
		end = (int)size - 1;
	}

	for (counter = start ; counter <= end ; counter++)
	{
		printf("Value checked array[%d] = [%d]\n", counter, array[counter]);
		if (array[counter] == value)
			return (counter);
	}
	return (-1);
}

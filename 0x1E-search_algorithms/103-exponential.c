#include "search_algos.h"

/**
 * min - A function return the min number
 * @a: num1
 * @b: num2
 * Return: Mininum number
 */
int min(int a, int b)
{
	if (a < b)
		return (a);

	else
		return (b);
}

/**
 * binary_search_algo - Searches a value in an array by Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @left: left element elements in array
 * @right: right element elements in array
 * @value: value to search for
 * Return: The value located
 */
int binary_search_algo(int *array, int left, int right, int value)
{
	int  middle, counter;

	if (!array)
		return (-1);

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

		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
			left = middle + 1;

		else
			right = middle - 1;
	}
	return (-1);
}

/**
 * exponential_search - exponential_search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: The value located
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 1, low, heigh;

	if (!array || value > array[(int)size - 1])
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}

	printf("Value found between indexes [%d] and [%d]\n", i / 2, (int)size - 1);
	low = i / 2;
	heigh = min(i, (int)size - 1);

	return (binary_search_algo(array, low, heigh, value));
}

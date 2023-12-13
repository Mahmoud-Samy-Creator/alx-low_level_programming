#include "search_algos.h"

/**
 * binarySearch - Searches for a value in an array by Binary search algorithm
 * @arr: A pointer to the first element of the array to search in
 * @l: left
 * @r: right
 * @x: value to search for
 * Return: The value located
 */
int binarySearch(int *arr, int l, int r, int x)
{
	int mid, counter;

    if (r >= l)
    {
        printf("Searching in array: ");
		for (counter = l ; counter <= r ; counter++)
		{
			printf("%d", arr[counter]);
			if (counter != r)
				printf(", ");
		}
		printf("\n");
        mid = l + (r - l) / 2;

    if (arr[mid] < x)
            return (binarySearch(arr, mid + 1, r, x));

    if (arr[mid - 1] == x)
            return (binarySearch(arr, l, mid, x));

    if (arr[mid] > x)
            return (binarySearch(arr, l, mid, x));
    
		return (mid);
	}

	return (-1);
}

/**
 * advanced_binary - Searches for a value in an array by Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: The value located
 */
int advanced_binary(int *array, size_t size, int value)
{
    int low, heigh;

    if (!array)
        return (-1);

    low = 0;
    heigh = size - 1;

    return (binarySearch(array,  low,  heigh,  value));
}

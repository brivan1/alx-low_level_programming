#include "search_algos.h"

/**
 * bin_search - function to recursively search an array
 * @arr: The array with elements of integers
 * @left: the lowest index in the array
 * @right: the max index in the array
 * @value: the value to search for
 * Return: -1 if value not found else the index where it is found
*/

int bin_search(int *arr, size_t left, size_t right, int value)
{
	size_t mid, itr;

	if (left > right)
		return (-1);

	printf("Searching in array: %d", arr[left]);
	for (itr = (left + 1); itr <= right; itr++)
		printf(", %d", arr[itr]);
	putchar('\n');

	if (left == right && arr[right] == value)
		return (right);

	if (left == right && arr[right] != value)
		return (-1);

	mid = left + (right - left) / 2;

	if ((mid == left || value != arr[mid - 1]) && arr[mid] == value)
		return (mid);

	if (arr[mid] >= value)
		return (bin_search(arr, left, mid, value));

	return (bin_search(arr, mid + 1, right, value));
}

/**
 * exponential_search - function to perform exponential search
 * @array: the array of integer values to search from
 * @size: The size of the array
 * @value: the value to search for from the array
 * Return: -1 if value not found else the index where it was found.
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t range, hi;

	if (array == NULL || !array)
		return (-1);

	if (array[0] == value)
		return (0);

	range = 1;

	while (range < size && array[range] < value)
	{
		printf("Value checked array[%lu] = [%u]\n", range,
			array[range]);
		range = range * 2;
	}

	if (size - 1 < range)
		hi = size - 1;
	else
		hi = range;

	printf("Value found between indexes [%lu] and [%lu]\n", range / 2, hi);
	return (bin_search(array, (range / 2), hi, value));
}

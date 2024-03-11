#include "search_algos.h"


int binary_search(int *array, size_t size, int value);
/**
 * binary_search - Searches for a value in a array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The index of the value, or -1 if not found or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid;
	int i = left;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			left = mid + 1;
			if (left <= right)
			{
				printf("Searching in right array: ");
				for (i = left; i <= right; i++)
				{
					printf("%d", array[i]);
					if (i < right)
						printf(", ");
				}
				printf("\n");
			}
		}
		else
		{
			right = mid - 1;
			if (left <= right)
			{
				printf("Searching in left array: ");
				for (i = left; i <= right; i++)
				{
					printf("%d", array[i]);
					if (i < right)
						printf(", ");
				}
				printf("\n");
			}
		}
	}

	return (-1);
}

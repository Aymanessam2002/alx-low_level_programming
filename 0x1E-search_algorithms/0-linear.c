#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers using the Linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found or the array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)  // Handle NULL array case
    {
        return -1;
    }

    for (size_t i = 0; i < size; i++)
    {
        printf("Value checked array[%zu] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return i;  // Return the index if found
        }
    }

    return -1;  // Return -1 if not found
}


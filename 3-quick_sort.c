#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * lomuto_partition - Lomuto partition scheme for Quick Sort.
 * @array: The array to be sorted.
 * @low: The lower index of the partition.
 * @high: The higher index of the partition.
 * @size: The size of the array (for printing).
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int j;
    int pivot = array[high];
    int i = low - 1;

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            if (i != j)
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                print_array(array, size);
            }
        }
    }

    if (i + 1 != high)
    {
        int temp = array[i + 1];
        array[i + 1] = array[high];
        array[high] = temp;
        print_array(array, size);
    }

    return (i + 1);
}

/**
 * quick_sort_recursive - Recursive function to perform Quick Sort.
 * @array: The array to be sorted.
 * @low: The lower index of the partition.
 * @high: The higher index of the partition.
 * @size: The size of the array (for printing).
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
    if (low < high)
    {
        int pivot_index = lomuto_partition(array, low, high, size);
        quick_sort_recursive(array, low, pivot_index - 1, size);
        quick_sort_recursive(array, pivot_index + 1, high, size);
    }
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick Sort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size <= 1)
        return;

    quick_sort_recursive(array, 0, size - 1, size);
}

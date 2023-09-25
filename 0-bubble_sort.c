#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array : pointer to the array to be sorted
 * @size : size of the array
 * return: 0 on success
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	unsigned int j;
	int temp;
	unsigned int flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
		{
			break;
		}
		}
}

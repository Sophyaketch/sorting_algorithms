#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 * using the Insertion sort algorithm.
 * @list: A pointer to the head of the linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;


	current = (*list)->next;

	while (current)
	{
		prev = current->prev;
		temp = current;

		while (prev && prev->n > current->n)
		{
			/* Swap nodes */
			if (current->next)
				current->next->prev = prev;
			prev->next = current->next;
			current->prev = prev->prev;
			prev->prev = current;
			current->next = prev;

			if (current->prev)
				current->prev->next = current;
			else
				*list = current;

			print_list(*list);

			prev = current->prev;
		}
		current = temp->next;
	}
}

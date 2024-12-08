#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A read-only pointer to the head node of a singly linked list.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)  /* Traverse the list until the end */
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");  /* If the string is NULL, print "(nil)" */
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);  /* Print the string and its length */
		}

		node_count++;  /* Increment the node counter */

		h = h->next;  /* Move to the next node */
	}

	return (node_count);  /* Return the total number of nodes */
}


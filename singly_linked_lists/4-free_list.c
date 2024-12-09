#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: A pointer to the list to free
 *
 * Description: This function frees all nodes in the list, including the
 *              strings stored in each node.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/* Save the next node */
		temp = head->next;

		/* Free the string stored in the current node */
		free(head->str);

		/* Free the current node */
		free(head);

		/* Move to the next node */
		head = temp;
	}
}


#include "lists.h"
#include <stdlib.h>
#include <string.h> /* For strdup and strlen */

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the list.
 * @str: The string to store in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 *
 * Description: This function creates a new node, duplicates the given string,
 * and appends the node to the end of the linked list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL)
		return (NULL); /* Return NULL if string is NULL */

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string and calculate its length */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node); /* Free the node if string duplication fails */
		return (NULL);
	}
	new_node->len = strlen(str); /* Use strlen for efficiency */
	new_node->next = NULL;       /* Set the next pointer to NULL */

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		/* Append the new node to the end */
		temp->next = new_node;
	}

	return (new_node); /* Return the new node */
}


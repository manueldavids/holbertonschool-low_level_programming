#include "lists.h"
#include <stdlib.h>
#include <string.h> /* For strdup and strlen */

/**
 * add_node - Adds a new node at the beginning of the list
 * @head: A pointer to the head of the list
 * @str: The string to store in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 *
 * Description: Allocates a new node, duplicates the string,
 * and adds the node at the start of the linked list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL); /* Return NULL if string is NULL */

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node); /* Free the node if string duplication fails */
		return (NULL);
	}

	/* Initialize the new node */
	new_node->len = strlen(str); /* Use strlen to get the string length */
	new_node->next = *head;      /* Point the new node to the current head */

	/* Update the head pointer to the new node */
	*head = new_node;

	return (new_node);
}


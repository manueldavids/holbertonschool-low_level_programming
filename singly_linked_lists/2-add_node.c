#include "lists.h"
#include <stdlib.h>  /* For malloc */

/**
 * add_node - Adds a new node at the beginning of the list
 * @head: A pointer to the head of the list
 * @str: The string to store in the new node
 *
 * Return: A pointer to the new node
 *
 * Description: This function creates a new node, stores
 * the provided string
 *              in the new node, and adds it at the beginning of the list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len = 0;
	int i;
	char *str_copy;

	/* Allocate memory for the new node */
	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails */
	}
	/* Calculate the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}
	/* Allocate memory for the string and copy it manually */
	str_copy = (char *)malloc(sizeof(char) * (len + 1));
	if (str_copy == NULL)
	{
		free(new_node);  /* Free the node if string allocation fails */
		return (NULL);
	}
	/* Copy the string into the new memory */
	for (i = 0; i < len; i++)
	{
		str_copy[i] = str[i];
	}
	str_copy[len] = '\0';  /* Null-terminate the copied string */
	/* Initialize the new node */
	new_node->str = str_copy;  /* Store the copied string */
	new_node->len = len;       /* Store the length of the string */
	new_node->next = *head;    /* Point the new node to the current head */
	/* Update the head pointer to the new node */
	*head = new_node;
	return (new_node);  /* Return the new node */
}

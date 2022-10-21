#include "lists.h"

/**
 * _strlen - return size of array char
 * @str: pointer char
 * Return: size of array char
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
 * add_node - adds a new node at the beginning of the list_t list
 * @head: linked lists
 * @str: string to be linked
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = (*head);

	(*head) = newNode;

	return (newNode);
}

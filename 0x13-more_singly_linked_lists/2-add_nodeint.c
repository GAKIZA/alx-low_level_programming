#include "lists.h"

/**
 * *add_nodeint - add new node at the start of al  linked list
 * @head: the starting node
 * @n: number of nodes to be added
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

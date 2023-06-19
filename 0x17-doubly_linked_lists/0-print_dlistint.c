#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to the head of a doubly linked list
 * Return: 1
 */

size_t print_dlistint(const dlistint_t *h)
{
	
	current = *h;
	while (current)
	{
		printf("%d",current->data);
		current = current->next;
	}
	return 1;
}


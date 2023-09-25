#include "lists.h"

/**
 * print_listint - prints the elements in a list
 * @h: head in a list
 *
 * Return: numbers of a node
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

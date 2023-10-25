#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 *
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", h->n);
		count++;
		ptr = ptr->next;
		h = h->next;
	}
	return (count);
}

# include "lists.h"
/**
 * listint_len - A function that returns the number of elements in a linked listint_t list.
 *
 * @h: inked list of type listint_t to traverse
 *
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

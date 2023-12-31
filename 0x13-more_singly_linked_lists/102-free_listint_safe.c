#include "lists.h"
/**
 * free_listint_safe - A function that frees a listint_t list.
 *
 * @h: A pointer
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int m;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		m = *h - (*h)->next;
		if (m > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}

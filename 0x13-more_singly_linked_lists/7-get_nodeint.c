#include "lists.h"
/**
 * get_nodeint_at_index - A function that returns
 * the nth node of a listint_t linked list.
 *
 * @head: The first node
 * @index: index of the node
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp = head;

	while (temp && n < index)
	{
		temp = temp->next;
		n++;
	}
	return (temp ? temp : NULL);
}

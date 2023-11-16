#include "lists.h"
/**
* list_len - Calculate the number of elements.
* @h: Pointer to a list.
* Return: Integer.
**/
size_t list_len(const list_t *h)
{
	const list_t *tryp;
	unsigned int counter = 0;

	tryp = h;
	while (tryp)
	{
		counter++;
		tryp = tryp->next;
	}
	return (counter);
}

#include "monty.h"
/**
 * swap_top - Adds the top elements of the stack.
 * @head: Stack head. 
 * @counter: line number count. 
 * 
 * Return: No return
*/
void swap_top(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(gvar.file);

		free(gvar.content);
		free_stack(*head);

		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}

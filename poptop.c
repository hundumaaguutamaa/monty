#include "monty.h"
/**
 * top_pop - Prints the top stack. 
 * @head: Stack head.
 * @counter: Number lines. 
 * 
 * Return: No return
*/
void top_pop(stack_t **head, unsigned int counter)
{
	stack_t *s;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(gvar.file);
		free(gvar.content);
		free_stack(*head);
		
        exit(EXIT_FAILURE);
	}
	s = *head;
	*head = s->next;
	free(s);
}

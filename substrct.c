#include "monty.h"
/**
  *top_sub- Substract top. 
  *@head: Stack head. 
  *@counter: line number.
  * 
  *Return: No return.
 */
void top_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(gvar.file);
		free(gvar.content);
		free_stack(*head);

		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
    
	free(aux);
}

#include "monty.h"

/**
 * top_pint - Prints pinted top. 
 * @head: Stack head. 
 * @counter: Hold line number. 
 * 
 * Return: No return. 
*/

void top_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);

		fclose(gvar.file);
		free(gvar.content);
		free_stack(*head);

		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

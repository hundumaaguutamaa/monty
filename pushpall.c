#include "monty.h"
/**
 * push_pall - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/

void push_pall(stack_t **head, unsigned int counter)
{

	  int n; 
	  int j = 0;
	  int flag = 0;

	if (gvar.arg)
	{
		if (gvar.arg[0] == '-')
			j++;
		for (; gvar.arg[j] != '\0'; j++)
		{
			if (gvar.arg[j] > 57 || gvar.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ 
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(gvar.file);
			free(gvar.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ 
		fprintf(stderr, "L%d: usage: push integer\n", counter);

		fclose(gvar.file);
		free(gvar.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }

	n = atoi(gvar.arg);
	
	if (gvar.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

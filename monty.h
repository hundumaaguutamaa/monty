#ifndef MONTY_H
#define MONTY_H
#define  _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure

 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct global_v - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: Change stack to  queue. 
 */
typedef struct global_v
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  global_var;
extern global_var gvar;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);

} instruction_t;


char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void push_pall(stack_t **head, unsigned int counter);
void top_pint(stack_t **head, unsigned int counter);
int execute_op_code(char *content, stack_t **stack, unsigned int counter, FILE *file); 
void free_stack(stack_t *head);
void top_pop(stack_t **head, unsigned int counter); 
void swap_top(stack_t **head, unsigned int counter);
void add_elmnt(stack_t **head, unsigned int counter); 
void addqueue(stack_t **head, int n);
void addnode(stack_t **head, int n);
void a_queue(stack_t **head, unsigned int counter);
void n_nop(stack_t **head, unsigned int counter);
void top_sub(stack_t **head, unsigned int counter);
void add_new_node(stack_t **head, int n);

#endif

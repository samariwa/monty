#ifndef MONTY_H
#define MONTY_H
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        int (*f)(stack_t **stack, const int line_number);
} instruction_t;

extern stack_t *head;
int add(stack_t **head, const int n);
int (*get_function(char *cmd))(stack_t **, const int);
int _atoi(char *string);
char *itoa(int val, int base);
stack_t *create_node(int n);
int print_all(stack_t **head, const int n);
int pop(stack_t **head,  const int n);
void space_separator(char **cmd, char *line);
int push(stack_t **head, const int n);
void line_separator(char **lines, char *buffer);
#endif

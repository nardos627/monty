#include "monty.h"

/**
 * print_top - Prints the value at the top of the stack
 * @stack: Pointer to the stack head
 * @line_number: Line number where the operation is called
 * 
 * Description:
 * This function prints the value at the top of the stack.
 * 
 * Return: No return value
 */
void print_top(stack_t **stack, unsigned int line_number)
{
  if (*stack == NULL)
  {
    fprintf(stderr, "L%u: can't print, stack empty\n", line_number);
    fclose(bus.file);
    free(bus.content);
    free_stack(*stack);
    exit(EXIT_FAILURE);
  }
  
  printf("%d\n", (*stack)->value);
}

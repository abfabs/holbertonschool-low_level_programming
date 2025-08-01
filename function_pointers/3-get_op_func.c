#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Selects the correct operation.
 * @s: The operator string.
 *
 * Return: Pointer to correct function or NULL if no match.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && strcmp(s, ops[i].op) != 0)
		i++;

	return (ops[i].f);
}

#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * @s: operator passed as argument to the program
 * Return: NULL if s does not match +, -, ÷, *, %
 */

int (*get_up_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+" = op_add},
		{"-" = op_sub},
		{"*" = op_mul},
		{"/" = op_div},
		{"%" = op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}

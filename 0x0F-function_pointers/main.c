#ifndef CALC_H
#define CALC_H

/*
 * Desc: Header file containing all structures and
 *       prototypes used by the 3-main.c program.
 */
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - A struct op.
 * @op: The operator.
 * @f: The associated function.
 * main - program to perform operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */
typedef struct op

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

#endif
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}

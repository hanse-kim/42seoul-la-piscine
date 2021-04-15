/*
======================================./2-4-do_op.txt===========================
Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------

Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
  that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %

The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.

You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.

Examples:

$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
================================================================================
*/

#include <stdio.h>
#include <stdlib.h>

int calculate(int n1, int n2, char operator)
{
	if (operator == '+')
		return n1 + n2;
	if (operator == '-')
		return n1 - n2;
	if (operator == '*')
		return n1 * n2;
	if (operator == '/')
		return n1 / n2;
	return n1 % n2;
}

int main(int argc, char **argv)
{
	if (argc == 4 && argv[2][0] != '\0' && argv[2][1] == '\0')
	{
		printf("%d", calculate(atoi(argv[1]), atoi(argv[3]), argv[2][0]));
	}
	printf("\n");
}

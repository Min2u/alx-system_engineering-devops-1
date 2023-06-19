#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check when the string there are digit
 * @str: array of string
 *
 * Return: always 0 (success)
 */

int check_num(char *str)
{
	/*declaring of variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*to count the string*/

	{
		if (!isdigit(str[count])) /*check if string there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - to print the name of the program
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*declaring of variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*to go through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*atoi --> converts string to int*/
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*to print sum*/

	return (0);
}

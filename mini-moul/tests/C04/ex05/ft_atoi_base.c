#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../../../ex05/ft_atoi_base.c"
#include "../../../utils/constants.h"

int test1(void);
int test2(void);
int test3(void);

int main(void)
{
	if (test1()+test2()+test3() != 0)
		return (-1);
	return (0);
}

int test1(void)
{
	int result;
	int expected_output;

	result = ft_atoi_base("    +-14353", "0123456789");
	expected_output = -14353;
	if (result != expected_output)
	{
		printf("    " RED "[1] ft_atoi_base(\"    +-14353\", \"0123456789\") Expected %d, got %d\n"DEFAULT, expected_output, result);
		return (-1);
	}
	else
		printf("  " GREEN CHECKMARK GREY " [1] ft_atoi_base(\"    +-14353\", \"0123456789\") Expected %d, got %d\n"DEFAULT, expected_output, result);
	return (0);
}

int test2(void)
{
	int result;
	int expected_output;

	result = ft_atoi_base("         ---10101001", "01");
	expected_output = -169;
	if (result != expected_output)
	{
		printf("    " RED "[2] ft_atoi_base(\"         ---10101001\", \"01\") Expected %d, got %d\n"DEFAULT, expected_output, result);
		return (-1);
	}
	else
		printf("  " GREEN CHECKMARK GREY " [2] ft_atoi_base(\"         ---10101001\", \"01\") Expected %d, got %d\n"DEFAULT, expected_output, result);
	return (0);
}

int test3(void)
{
	int result;
	int expected_output;

	result = ft_atoi_base("     +---59", "0123456789abcdef");
	expected_output = -89;
	if (result != expected_output)
	{
		printf("    " RED "[3] ft_atoi_base(\"     +---59\", \"0123456789abcdef\") Expected %d, got %d\n"DEFAULT, expected_output, result);
		return (-1);
	}
	else
		printf("  " GREEN CHECKMARK GREY " [3] ft_atoi_base(\"     +---59\", \"0123456789abcdef\") Expected %d, got %d\n"DEFAULT, expected_output, result);
	return (0);
}
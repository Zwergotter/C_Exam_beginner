/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeveze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 17:37:15 by edeveze           #+#    #+#             */
/*   Updated: 2017/01/10 17:55:44 by edeveze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int calculate(int first, int second, char ope)
{
	if (ope == '+')
		return(first + second);
	else if (ope == '-')
		return(first - second);
	else if (ope == '*')
		return(first * second);
	else if (ope == '/')
		return(first / second);
	else if (ope == '%')
		return(first % second);
	return(0);
}

int	main(int argc, char **argv)
{
	int first;
	int second;
	int result;
	char ope;

	if (argc == 4)
	{
		first = atoi(argv[1]);
		second = atoi(argv[3]);
		ope = argv[2][0];
		result = calculate(first, second, ope);
		printf("%d", result);
	}
	printf("\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 11:16:38 by exam              #+#    #+#             */
/*   Updated: 2017/01/17 11:44:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[1][i] && (argv[1][i] == '\t' || argv[1][i] == '\n' || argv[1][i] == '\v'
					|| argv[1][i] == '\f' || argv[1][i] == '\r' || argv[1][i] == ' '))
				i++;
			while (argv[1][i] && (argv[1][i] != '\t' && argv[1][i] != '\n' && argv[1][i] != '\v'
					&& argv[1][i] != '\f' && argv[1][i] != '\r' && argv[1][i] != ' '))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			while (argv[1][i] && (argv[1][i] == '\t' || argv[1][i] == '\n' || argv[1][i] == '\v'
					|| argv[1][i] == '\f' || argv[1][i] == '\r' || argv[1][i] == ' '))
				i++;
			if (argv[1][i] != '\0')
			{
				while (j++ < 3)
					write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}

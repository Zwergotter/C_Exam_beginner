/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:05:52 by exam              #+#    #+#             */
/*   Updated: 2016/12/27 10:22:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void repeat_alpha(char c, int i)
{
	while (i-- > 0)
		write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	char c;
	int i;

	if (argc == 2)
	{
		while (*argv[1])
		{
			c = *argv[1];
			i = 1;
			if (*argv[1] >= 66 && *argv[1] <= 90)
				i = *argv[1] - 64;
			if (*argv[1] >= 98 && *argv[1] <= 122)
				i = *argv[1] - 96;
			repeat_alpha(c, i);
			argv[1]++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeveze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 12:07:10 by edeveze           #+#    #+#             */
/*   Updated: 2016/12/15 12:26:05 by edeveze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char c;

	if (argc == 2)
	{
		while (*argv[1])
		{
			c = *argv[1];
			if ((*argv[1] >= 65 && *argv[1] <= 77)
					|| (*argv[1] >= 97 && *argv[1] <= 109))
				c = c + 13;
			if ((*argv[1] >= 78 && *argv[1] <= 90)
					|| (*argv[1] >= 110 && *argv[1] <= 122))
				c = c - 13;
			write(1, &c, 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

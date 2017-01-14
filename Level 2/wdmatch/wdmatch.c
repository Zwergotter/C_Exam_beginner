/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeveze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:37:26 by edeveze           #+#    #+#             */
/*   Updated: 2016/12/12 16:52:22 by edeveze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	char *temp;

	i = 0;
	j = 0;
	temp = argv[1];
	if (argc == 3)
	{
		while (temp[i] && argv[2][j])
		{
			if (temp[i] == argv[2][j])
				i++;
			j++;
		}
		if (temp[i] == '\0')
			write(1, argv[1], ft_strlen(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}

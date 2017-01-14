/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeveze <edeveze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 18:33:29 by edeveze           #+#    #+#             */
/*   Updated: 2016/12/12 18:35:59 by edeveze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
			write(1, "1", 1);
        else
            write (1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}

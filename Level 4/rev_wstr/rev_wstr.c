/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeveze <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 18:18:34 by edeveze           #+#    #+#             */
/*   Updated: 2017/01/19 18:47:07 by edeveze          ###   ########.fr       */
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

int main(int ac, char **av)
{
	int word_found;
	int len_str;
	int len_word;
	int writing;

	if (ac == 2)
	{
		len_str = ft_strlen(av[1]) - 1;
		while (len_str >= 0)
		{
			word_found = len_str;
			while (word_found >= 0 && (av[1][word_found] != ' '
						&& av[1][word_found] != '\t'))
				word_found--;
			len_word = len_str - word_found;
			writing = word_found +  1;
			while (len_word-- > 0)
				write(1, &av[1][writing++], 1);
			if (word_found > 0)
				write(1, " ", 1);
			len_str = word_found - 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}

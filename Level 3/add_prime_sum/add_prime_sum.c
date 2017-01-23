/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeveze <edeveze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 10:20:07 by edeveze           #+#    #+#             */
/*   Updated: 2017/01/23 13:54:13 by edeveze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int mini_atoi(char *str)
{
	int result;
	int i;
	result = 0;
	i = 0;
	if (str[i] == '0' || (str[i] <= '0' && str[i] > '9'))
		return (0);
	else
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10;
			result = result + (str[i] - '0');
			i++;
			if (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
				return (0);
		}
	}
	return (result);
}

void    ft_putnbr(int nb)
{
	char c;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		c = (nb % 10) + '0';
		write(1, &c, 1);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}

}

int main(int ac, char **av)
{
	int nb;
	int result;
	int find_first;
	int second_check;

	result = 0;
	if (ac == 2)
	{
		if ((nb = mini_atoi(av[1])))
		{
			find_first = nb;
			while (find_first > 1)
			{
				second_check = 1;
				while (find_first > second_check)
					{
						if (second_check > 1 && find_first % second_check == 0)
							break ;
						second_check++;
					}
				if (find_first == second_check && (find_first % second_check == 0))
					result = result + find_first;
				find_first--;
			}
		}
		ft_putnbr(result);
	}
	else
		write(1, "0", 1);
	write(1,"\n", 1);
	return (0);
}

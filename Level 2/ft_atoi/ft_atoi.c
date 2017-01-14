/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edeveze <edeveze@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 12:27:39 by edeveze           #+#    #+#             */
/*   Updated: 2016/12/15 13:40:22 by edeveze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while ((*str > 8 && *str < 14) || (*str == 32))
		str++;
	if ((*str == 43 || *str == 45) && (*(str + 1) >= 48 && *(str + 1) <= 57))
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10;
		result = result + (*str - 48);
		str++;
	}
	return (result * sign);
}

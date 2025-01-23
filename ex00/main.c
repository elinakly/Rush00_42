/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spyun <spyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:41:05 by spyun             #+#    #+#             */
/*   Updated: 2024/08/18 13:42:22 by spyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(int argc, char *argv[])
{
	int		x;
	int		y;
	char	*str;

	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	str = "Error, put vaild number";
	if (argc == 3)
	{
		if (x > 0 && y > 0)
		{
			rush(x, y);
		}
		else
		{
			write(1, str, 23);
		}
	}
	else
	{
		write(1, str, 23);
	}
	return (0);
}

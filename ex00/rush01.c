/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spyun <spyun@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:41:36 by spyun             #+#    #+#             */
/*   Updated: 2024/08/18 15:10:44 by spyun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_row(int horizontal, char first, char middle, char last)
{
	if (horizontal == 1)
	{
		ft_putchar(first);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(first);
		while (horizontal - 2 > 0)
		{
			ft_putchar(middle);
			horizontal--;
		}
		ft_putchar(last);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	verical;

	verical = 1;
	if (x != 0 && y != 0)
	{
		while (verical <= y)
		{
			if (verical == 1)
			{
				ft_print_row(x, '/', '*', '\\');
				verical++;
			}
			else if (verical == y)
			{
				ft_print_row(x, '\\', '*', '/');
				verical++;
			}
			else
			{
				ft_print_row(x, '*', ' ', '*');
				verical++;
			}
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:41:32 by limashin          #+#    #+#             */
/*   Updated: 2020/07/15 10:56:28 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	middle(int a, int b)
{
	int	i;
	int	count;

	if (b > 1)
	{
		count = 0;
		while (count < (b - 2))
		{
			ft_putchar('\n');
			ft_putchar('*');
			i = 0;
			while (i < (a - 2))
			{
				ft_putchar(' ');
				++i;
			}
			if (a > 1)
				ft_putchar('*');
			++count;
		}
	}
}

void	end(int a, int b)
{
	int	i;

	if (a > 0 && b > 1)
	{
		ft_putchar('\n');
		ft_putchar('o');
		i = 0;
		while (i < (a - 2))
		{
			ft_putchar('*');
			++i;
		}
		if (a > 1)
			ft_putchar('o');
	}
	if (a > 0 && b > 0)
		ft_putchar('\n');
}

void	rush(int a, int b)
{
	int	i;

	if (a > 0 && b > 0)
		ft_putchar('o');
	i = 0;
	while (i < (a - 2) && b > 0)
	{
		ft_putchar('*');
		++i;
	}
	if (a > 1 && b > 0)
		ft_putchar('o');
	middle(a, b);
	end(a, b);
}
int main(void)
{
	rush(5, 3);
	return 0;
}

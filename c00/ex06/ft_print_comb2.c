/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 03:26:55 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/07 23:39:20 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char d1, char u1, char d2, char u2);
void	int_to_char_print(int i, int j);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			int_to_char_print(i, j);
			j++;
		}
		i++;
	}
}

void	int_to_char_print(int i, int j)
{
	char	r[4];

	r[0] = i / 10 + '0';
	r[1] = i % 10 + '0';
	r[2] = j / 10 + '0';
	r[3] = j % 10 + '0';
	ft_putchar(r[0], r[1], r[2], r[3]);
	if (i + j != 98 + 99)
		write(1, ", ", 2);
}

void	ft_putchar(char d1, char u1, char d2, char u2)
{
	write(1, &d1, 1);
	write(1, &u1, 1);
	write(1, " ", 1);
	write(1, &d2, 1);
	write(1, &u2, 1);
}

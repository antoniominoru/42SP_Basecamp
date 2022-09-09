/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:38:23 by etomiyos          #+#    #+#             */
/*   Updated: 2022/02/12 01:10:34 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int x, char i, char m, char f);

void	rush(int x, int y)
{
	int	col;

	col = 0;
	if (y > 0)
		ft_putchar(x, 'o', '-', 'o');
	if (y > 2)
	{
		while (col < (y -2))
		{
			ft_putchar(x, '|', ' ', '|');
			col++;
		}
	}
	if (y > 1)
		ft_putchar(x, 'o', '-', 'o');
}

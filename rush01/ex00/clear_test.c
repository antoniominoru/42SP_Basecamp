/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:01:39 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/13 13:44:50 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	clear_test(int aux[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		{
			while (j < 4)
			{
				aux[i][j] = 0;
				j++;
			}
			j = 0;
			i++;
		}
	}
	return ;
}

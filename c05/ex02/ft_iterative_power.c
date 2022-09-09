/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:38:33 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/18 16:25:06 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ref;

	ref = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
		ref *= nb;
	return (ref);
}

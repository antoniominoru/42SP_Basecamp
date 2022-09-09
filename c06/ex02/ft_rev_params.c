/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:21:26 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/19 00:05:57 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	j;

	while (--argc)
	{
		j = 0;
		while (j < ft_strlen(argv[argc]))
		{
			write(1, &argv[argc][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

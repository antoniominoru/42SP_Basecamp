/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 00:54:14 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/18 21:30:04 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main (void)
{
	printf("-6 = %d\n", ft_iterative_factorial(-6));
	printf("0 = %d\n", ft_iterative_factorial(0));
	printf("1 = %d\n", ft_iterative_factorial(1));
	printf("2 = %d\n", ft_iterative_factorial(2));
	printf("3 = %d\n", ft_iterative_factorial(3));
	printf("4 = %d\n", ft_iterative_factorial(4));
	printf("24 = %d\n", ft_iterative_factorial(24));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:39:18 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/17 20:22:43 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	str1[] = "Teste";
	char	str2[] = "Teste";

	if (ft_strcmp(str1, str2) == 0)
		printf("Igual!\n%d\n", ft_strcmp(str1, str2));
	else if (ft_strcmp(str1, str2) < 0)
		printf("Diferente!\nPrimeiro menor\n%d\n", ft_strcmp(str1, str2));
	else if (ft_strcmp(str1, str2) > 0)
		printf("Diferente!\nPrimeiro maior\n%d\n", ft_strcmp(str1, str2));
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:39:18 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/17 20:21:01 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	str1[] = "Testa";
	char	str2[] = "Teste";
	int	tamanho = 4;

	if (ft_strncmp(str1, str2, tamanho) == 0)
		printf("Igual!\n");
	else if (ft_strncmp(str1, str2, tamanho) < 0)
		printf("Diferente!\nPrimeiro menor\n");
	else if (ft_strncmp(str1, str2, tamanho) > 0)
		printf("Diferente!\nPrimeiro maior\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:39:18 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/16 01:29:36 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str1[] = "MAIUSCULO";
	char	str2[] = "minusculo";

	if (ft_str_is_uppercase(str1) == 0)
		printf("%s = Tem caracteres que não são maiusculos\n\n", str1);
	else
		printf("%s = Só tem caracteres maiusculos\n\n", str1);			

	if (ft_str_is_uppercase(str2) == 0)	
		printf("%s = Tem caracteres que não são maiusculos\n\n", str2);
	else
		printf("%s = Só tem caracteres maiusculos\n\n", str2);	
}
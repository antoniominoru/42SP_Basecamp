/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:39:18 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/15 23:50:11 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str1[] = "MAiusculo";
	char	str2[] = "minusculo";

	if (ft_str_is_lowercase(str1) == 0)
		printf("%s = Tem caracteres que não são minusculos\n\n", str1);
	else
		printf("%s = Só tem caracteres minusculos\n\n", str1);			

	if (ft_str_is_lowercase(str2) == 0)	
		printf("%s = Tem caracteres que não são minusculos\n\n", str2);
	else
		printf("%s = Só tem caracteres minusculos\n\n", str2);	
}
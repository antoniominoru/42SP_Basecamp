/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:39:18 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/16 01:51:38 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str1[] = "\nffgs";
	char	str2[] = "minusculo";

	if (ft_str_is_printable(str1) == 0)
		printf("%s = Tem caracteres que não são printaveis\n\n", str1);
	else
		printf("%s = Só tem caracteres printaveis\n\n", str1);			

	if (ft_str_is_printable(str2) == 0)	
		printf("%s = Tem caracteres que não são printaveis\n\n", str2);
	else
		printf("%s = Só tem caracteres printaveis\n\n", str2);	
}
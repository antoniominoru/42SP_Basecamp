/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:39:18 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/15 19:59:03 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str1[] = "8745678";
	char	str2[] = "Funcionou";

	if (ft_str_is_numeric(str1) == 0)
		printf("%s = Tem caracteres que não são numeros\n\n", str1);
	else
		printf("%s = Só tem numeros\n\n", str1);			

	if (ft_str_is_numeric(str2) == 0)
		printf("%s = Tem caracteres que não são numeros\n\n", str2);
	else
		printf("%s = Só tem numeros\n\n", str2);			
}
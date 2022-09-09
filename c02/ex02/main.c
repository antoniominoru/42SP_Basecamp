/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:39:18 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/15 16:50:26 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str1[] = "Func10n0u";
	char	str2[] = "Funcionou";
	char	str3[] = "";

	if (ft_str_is_alpha(str1) == 0)
		printf("%s = Tem outros tipos de caracteres\n\n", str1);
	else
		printf("%s = Só tem caracteres alfabéticos\n\n", str1);			

	if (ft_str_is_alpha(str2) == 0)
		printf("%s = Tem outros tipos de caracteres\n\n", str2);
	else
		printf("%s = Só tem caracteres alfabéticos\n\n", str2);


	if (ft_str_is_alpha(str3) == 0)
		printf("%s = Tem outros tipos de caracteres\n\n", str3);
	else
		printf("%s = Só tem caracteres alfabéticos\n\n", str3);

}
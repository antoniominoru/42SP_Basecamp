/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:45:02 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/15 14:15:56 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	destino[] = "Esse é o destino";
	char	src[] = "Esse é o origem";
	char	*dest;
		
	printf("destino = %s\norigem = %s\n----\n", destino, src);
	dest = ft_strcpy(destino, src);
	printf("dest = %s\norigem = %s\n", dest, src);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:38:18 by aminoru-          #+#    #+#             */
/*   Updated: 2022/02/15 15:27:33 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "Original";
	char	dest[40];
	unsigned int	n;

	n = 20;
	printf("Antes Original = %s\n",src);
	ft_strncpy(dest, src, n);
	dest[n] = '\0';
	printf("Depois Destino = %s\nacrescentado %d caracteres\n",dest,n);

	return (0);
	
	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leomiran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 22:04:14 by leomiran          #+#    #+#             */
/*   Updated: 2026/10/31 19:22:51 by leomiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	change_striteri(unsigned int i, char *str)
{
	//(void)n;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 'a' - 'A';
}	

int	main(void)
{
	char	string[] = "abcd1AAaef";

	ft_striteri(string, change_striteri);
	printf("%s\n", string);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:34:44 by nettalha          #+#    #+#             */
/*   Updated: 2023/01/03 16:37:55 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putsr(char *s)
{
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}

int	main(void)
{
	char	*s;

	s = "Hello";
	ft_putsr(s);
}

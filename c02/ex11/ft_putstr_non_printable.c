/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:03:16 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/10/03 09:06:17 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char c)
{
	write (1, &c, 1);
}

void	ft_hexa(unsigned char c)
{
	char	*p;

	p = "0123456789abcdef";
	write(1, "\\", 1);
	ft_putstr(p[c / 16]);
	ft_putstr(p[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 123)
			ft_hexa(str[i]);
		else
			ft_putstr(str[i]);
		i++;
	}
}
/*int	main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return(0);
}*/

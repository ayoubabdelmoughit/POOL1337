/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:23:46 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/09/27 12:51:32 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
			ft_putchar(32);
			ft_putchar(j / 10 + 48);
			ft_putchar(j % 10 + 48);
			if (i == 98)
				return ;
			ft_putchar(44);
			ft_putchar(32);
			j++;
		}
		i++;
	}	
}
/*int main()
{
	ft_print_comb2();
	return(0);
}*/

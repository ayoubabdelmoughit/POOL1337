/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 07:52:34 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/09/25 10:07:01 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_numbers(int i, int j, int k)
{
	char	v;
	char	e;

	v = ',';
	e = ' ';
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (k == '9' && k - 1 == j && j - 1 == i)
		return ;
	write(1, &v, 1);
	write(1, &e, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_numbers(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
/*int main()
{
	ft_print_comb();
	return(0);
}*/	

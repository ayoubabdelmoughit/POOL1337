/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:50:03 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/09/27 15:43:37 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	rev;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		rev = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = rev;
		i++;
	}
}
/*int main()
{
	int tab[5]={1,2,3,4,5};
	int i =0;

	while(i <5)
	{
		ft_rev_int_tab( tab, 5);
		printf("%d", tab[i]);

		i++;
	}
}*/

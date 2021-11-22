/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:02:11 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/09/27 16:29:19 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	sor;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				sor = tab[i];
				tab[i] = tab[j];
				tab[j] = sor;
			}
			j++;
		}
		i++;
	}
}
/*int main()
{
	int tab[7] = {1,2,3,10,9,8,12};
	ft_sort_int_tab(tab, 7);
	int i =0;
	while(i<7)
	{
		printf("%d ",tab[i]);
		i++;
	}
}*/

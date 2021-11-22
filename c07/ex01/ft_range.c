/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:00:58 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/10/13 13:02:53 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;
	int	r;

	i = 0;
	if (min >= max)
		return (0);
	r = max - min;
	p = (int *)malloc(sizeof (int *) * r);
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*int main ()
{
	int *a ;
	int i;
	a = ft_range(-2,10);
	i = 0;
	for (i = 0 ; i <12; i++)
	{
		printf ("%d", a[i]);
	}
	return (0);
}*/

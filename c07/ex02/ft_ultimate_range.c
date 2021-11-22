/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:03:47 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/10/13 13:05:58 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	rml;

	if (min >= max)
		return (0);
	rml = max - min;
	i = 0;
	range[0] = (int *)malloc(sizeof (int *) * rml);
	if (range[0] == 0)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	range[0][i] = '\0';
	return (rml);
}

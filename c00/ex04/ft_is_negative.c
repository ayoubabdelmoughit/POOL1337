/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 07:36:49 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/09/25 07:51:10 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	rs;

	if (n >= 0)
	{
		rs = 'P';
	}
	else
	{
		rs = 'N';
	}
	write (1, &rs, 1);
}
/*int main()
{
	ft_is_negative(-7);
	return(0);
}*/

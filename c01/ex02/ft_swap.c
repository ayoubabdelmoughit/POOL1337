/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 08:49:43 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/09/27 09:36:22 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int	tmp;

	tmp = *a;
	*a = *b ;
	*b = tmp;
}
/*int main()
	 {
		 int *c;
		int *d;
		 int a;
		 int b;
		  a=5;
		  b=10;
		c = &a;
		d = &b;
	  ft_swap(c, d);
	printf("%d : %d",*c,*d);
	 }*/
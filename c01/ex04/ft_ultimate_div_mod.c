/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:21:57 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/09/27 10:46:17 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b ;
	*a = tmp;
}
/*int main()
{
	int *d ;
	int *m ;
	 int a=10;
	 int b=5;
	 d=&a;
	 m=&b;
	 ft_ultimate_div_mod(d,m);
	 printf("%d %d", *d, *m);
}*/

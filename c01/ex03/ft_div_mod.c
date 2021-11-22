/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:37:05 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/09/27 10:20:44 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int a=10;
	int b=5;
	int *div;
	int *mod;
	int d;
	int m;
	div=&d;
    mod=&m;
ft_div_mod(a,b,div,mod);	
	printf("%d  %d",*div ,*mod);
}*/

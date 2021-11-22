/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 08:52:42 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/10/10 13:49:46 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		r = r * nb;
		nb--;
	}
	return (r);
}
/*int main()
{
    printf("%d",ft_iterative_factorial(4));
    return (0);
}*/

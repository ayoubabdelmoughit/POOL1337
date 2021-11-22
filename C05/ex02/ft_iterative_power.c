/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 09:05:33 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/10/10 13:57:10 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		r = r * nb;
		power--;
	}
	return (r);
}
/*int main()
{
	printf("%d", ft_iterative_power(10,3));
	return (0);
}*/

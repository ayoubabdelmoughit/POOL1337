/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:33:17 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/10/06 09:00:30 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	r;
	int	i;
	int	minus;

	r = 0;
	minus = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13 ) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	return (r * minus);
}
/*int main()
{
	printf("%d", ft_atoi(" ---+--+1234ab567"));
	return (0);
}*/

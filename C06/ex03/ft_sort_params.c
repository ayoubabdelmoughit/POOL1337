/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:16:19 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/10/12 12:18:27 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_comp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] && s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

void	ft_sort_params(char **str)
{
	int		i;
	int		j;
	char	*t;

	i = 1;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (ft_comp (str[i], str[j]) > 0)
			{
				t = str[i];
				str[i] = str[j];
				str[j] = t;
			}
			j++;
		}
		ft_putstr(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_sort_params(argv);
}

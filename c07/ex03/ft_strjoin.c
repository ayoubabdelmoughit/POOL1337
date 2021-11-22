/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:09:01 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/10/13 13:14:07 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_count_malloc(int size, char **strs, char *sep)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (i < size)
	{
		if (i == size - 1)
			r = r + ft_lenght(strs[i]);
		else
			r = r + ft_lenght(strs[i]) + ft_lenght(sep);
		i++;
	}
	return (r);
}

void	ft_create_strjoin(int size, char **strs, char *sep, char *p)
{
	int	a;
	int	i;
	int	k;

	i = -1;
	a = 0;
	while (++i < size)
	{
		k = -1;
		while (strs[i][++k] != '\0')
			p[a++] = strs[i][k];
		k = -1;
		if (i < size - 1)
		{
			while (sep[++k] != '\0')
				p[a++] = sep[k];
		}
	}
	p[a] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	char	*p;
	int		i;
	int		k;

	i = -1;
	a = 0;
	if (size == 0)
	{
		p = (char *) malloc(sizeof(char));
		p[0] = 0;
		return (p);
	}
	p = (char *) malloc(sizeof(char *) * ft_count_malloc(size, strs, sep) + 1);
	ft_create_strjoin(size, strs, sep, p);
	return (p);
}
/*int main ()
{
	char *t[]={"oussama", "youssef", "ayoub",
   	"dsfvcedwcf", "wedewd", "wefqdewqdf", "3qewfdewqd"};
	char a[]="-->>";
	printf("%s", ft_strjoin(7,t,a));
}*/

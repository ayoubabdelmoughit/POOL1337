/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 08:31:16 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/10/04 11:23:55 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlent(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlent(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*int main()
{
	char src[15]="bonjours";
	char dest[15]="bjr";
	printf("%s",ft_strncat(dest, src,8));
			return (0);
}*/

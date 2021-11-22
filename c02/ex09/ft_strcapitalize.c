/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdelmo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 10:43:32 by aabdelmo          #+#    #+#             */
/*   Updated: 2021/10/02 11:53:36 by aabdelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32 ;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	{
		if (str[i] != '\0' && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (! ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			{
				str[i] = str[i] - 32 ;
			}
		}
		i++;
	}
	return (str);
}
/*int main()
{
	char str[100]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
		printf("%s", ft_strcapitalize(str));
	return(0);
}*/

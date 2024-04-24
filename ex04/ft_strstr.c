/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:23:28 by aburga-g          #+#    #+#             */
/*   Updated: 2024/03/19 19:02:03 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	dest;
	int	orig;

	orig = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[orig] != '\0')
	{
		dest = 0;
		while (str[orig + dest] == to_find[dest])
		{
			if (to_find [dest + 1] == '\0')
			{
				return (str + orig);
			}
			dest++;
		}
		orig++;
	}
	return (0);
}
/*#include <stdio.h>

int main(void)
{
	char dest[] = "mundo";
	char orig[] = "granmundogrande";

	printf("%s", ft_strstr(orig, dest));
	return (0);
}*/

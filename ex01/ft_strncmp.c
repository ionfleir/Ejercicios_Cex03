/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:06:40 by aburga-g          #+#    #+#             */
/*   Updated: 2024/03/19 18:55:55 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((s1[count] != '\0' || s2[count] != '\0') && count < n)
	{
		if (s1[count] < s2[count])
		{
			return (-1);
		}
		else if (s1[count] > s2[count])
		{
			return (1);
		}
		count++;
	}
	return (0);
}

/*#include <stdio.h>

int main(void)
{
	int n = 7;
 	char s1[] = "holacaracola";
	char s2[] = "holacamaron con cola";

	ft_strncmp (s1, s2, n);
	printf("el valor de diferencia es %d", ft_strncmp (s1, s2, n));
	return (0);
}*/

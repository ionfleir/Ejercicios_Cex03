/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aburga-g <aburga-g@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:39:44 by aburga-g          #+#    #+#             */
/*   Updated: 2024/03/19 18:51:57 by aburga-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (s2[i] != '\0')
			i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int main(void)
{
	int n;
	
	char s1[] = "hola";
	char s2[] = "holi";
	n = ft_strcmp(s1, s2);
	printf("%d", n);
	return (0);
}*/

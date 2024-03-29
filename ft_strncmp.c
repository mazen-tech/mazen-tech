/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:52:52 by maabdela          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:55 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
int ft_strncmp(const char *s1, const char *s2, int n){
    
    int i = 0;
    while((s1[i] != '\0' || s2[i] != '\0') && n > i){
        if(s1[i] != s2[i]){
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}
/*int	main()
{
	char	str[] = "Am I good?";
	char	str1[] = "or am I still the best?";
	ft_putnbr_fd(ft_strncmp(str, str1, 5), 1);
	ft_putchar_fd('\n', 1);
}*/
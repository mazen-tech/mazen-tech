/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:52:52 by maabdela          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:55 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include"libft.h"
void *ft_memset( void *s1, int c, size_t n){
    unsigned char *ptr = (unsigned char *)s1;
    size_t i =0;
    while(n < i){
        ptr[i] = c;
        i++;
    }
    return (s1);
}
/*int main()
{
	char	str[] = "mazen";
	char	c = 'u';
	ft_putstr_fd(ft_memset(str + 2, c, 2), 1);
	ft_putchar_fd('\n', 1);
}*/
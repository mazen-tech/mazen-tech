/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:52:52 by maabdela          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:55 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include"libft.h"
void *ft_memmove(void *dest, const void *src, size_t n){
    char *dprt = (char *)dest;
    const char *sptr = (const char *)src;

    if(!src && ! dest){
        return (dest);
    }

    if(dest < src){ //if the condetion is true that mean that src is higher in mem than dest
                    //which means that no overlapping withh take place 
        return ft_memcpy(dest,src,n);
    }

    while(n--){ //we cant use i<n here cuz it will move the data in revears 
        dprt[n] = sptr[n];
    }
    return dest;
}
/*int main()
{
	char	str[] = "mazen tarek is student";
	char	dest[1];
	ft_putstr_fd(ft_memmove(dest, str, 10), 1);
	ft_putchar_fd('\n', 1);
}*/
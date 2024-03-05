/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:52:52 by maabdela          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:55 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"
size_t ft_strlcat(char *dest, const char *src, size_t n){
    size_t i = 0;//index of src
    size_t j = 0;//indec of dest
    char *ptr = (char *)src;

    while(*dest && i < n){//to iterate the loop and reach the end of dest
        dest++;
        i++;
    }

    if(i == n){
        return((i+ft_strlen(dest)));
    }

    while(ptr[j]){
        if(j < (n-i-1)){ //n-i-1 to make sure the size of dest is enough and avoid overflow 
            *dest++ = ptr[j];
        }
        j++;
    }
    dest = '\0';
    return (i+j);

}
/*int	main()
{
	char	dest[40] = "You won't even see me!";
	char	src[] = "Not even me, but you'll know our size!";
	ft_putnbr_fd(ft_strlcat(dest, src, 15), 1);
	ft_putchar_fd('\n', 1);
	printf("%s", dest);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:52:52 by maabdela          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:55 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include"libft.h"
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *dptr;
    const char *sptr;

    i = 0;
    dptr = (char *)dest;
    sptr = (const char *)src;

    if (!src && !dest)
    {
        return (dest);
    }

    while (n > i)
    {
        dptr[i] = sptr[i];
        i++;
    }
    return (dest);
}
/*int main()
{
	char	str[] = "Mazen tarek";
	char	dest[18];
	ft_putstr_fd(ft_memcpy(dest, str, 11), 1);
	ft_putchar_fd('\n', 1);
}*/
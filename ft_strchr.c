/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:52:52 by maabdela          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:55 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stddef.h>
#include"libft.h"
char    *ft_strchr(const char *str, int c)
{
    char *ptr;
    
    ptr  = (char *)str;
    while (*ptr)
    {
        if (*ptr == (unsigned char) c)
            return (ptr);
        ptr++;
    }
    if (c == '\0')
        return (ptr);
    return (NULL);
}
/*int	main()
{
	char	str[] = "mazen is student @42warsaw";
	char	c = '.';
	ft_putendl_fd(ft_strchr(str, c), 1);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdyp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:52:52 by maabdela          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:55 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
char *ft_strdup(const void *str){
    size_t len = ft_strlen(str)+1;
    char *dest = malloc(len);

    if(dest == NULL){ //to check if the memory allocation happend successfully
        return NULL;
    }

    ft_memcpy(dest,str,len);
    return(dest);
}
/*int	main()
{
	char	str[] = "mazen lives in warsaw";
	char	str1[] = "mazen is greek";
	char	str2[] = "mazen is student";
	ft_putendl_fd(ft_strdup(str), 1);
	ft_putendl_fd(ft_strdup(str1), 1);
	ft_putendl_fd(ft_strdup(str2), 1);
}*/
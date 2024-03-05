/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:52:52 by maabdela          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:55 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t size; // size of remaining string after start

    if(!s)//if there is no big string return NULL
    {
        return (NULL);
    }

    if(start >= ft_strlen(s)) // that means the start out the rang of the big string
    {
        return(ft_strdup(""));
    }

    size = ft_strlen(s + start); //size of remaining with start is =  s + start 

    if(size < len){//length of sub string > size of remaing start 
        len = size;//adgust 
    }

    sub = (char *)malloc(sizeof(char) * (len + 1));//resurving memory for sub string

    if(!sub){
        return (NULL);
    }

    ft_strlcpy(sub, s + start, len + 1);
    return (sub);

}
/*int	main()
{
	char	str[] = "I love my job";
	ft_putendl_fd(ft_substr(str, 20, 30), 1);
}*/
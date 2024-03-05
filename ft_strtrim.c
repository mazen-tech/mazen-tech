/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:52:52 by maabdela          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:55 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char  *chrt;  // char that will be trimmed  
    size_t start = 0;
    size_t end = ft_strlen(s1) - 1;//-1 for the zero termenator
    if(!s1)
    {
     return (NULL);
    }

    if(!set){
        return (ft_strdup(s1));
    }

    while(s1[start] && strchr(set, s1[start])){
        start++;
    }

    while(s1[end] && strchr(set, s1[end])){
        end--;
    }

    chrt = ft_substr(s1, start, end - start + 1);//plus 1 to add space for the zero terminaror 
    return (chrt);

}
/*int	main()
{
	char	str[] = "Where's Wally?";
	char	str1[] = "Wally";
	ft_putendl_fd(ft_strtrim(str, str1), 1);
}*/
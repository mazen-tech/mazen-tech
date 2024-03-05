/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:52:52 by maabdela          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:55 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include"libft.h"
char *ft_strrchr(char *str, char c){
    int i = 0;
    int last_index = -1; //assumening that C has not been found yet 

    while(str[i] != '\0'){
        if(str[i] == c){
            last_index = i;
        }
        i++;
    }

    if(last_index != -1){
        return &str[last_index];
    }
    else{
        return (NULL);
    }
}
/*int	main()
{
	char	str[] = "hello word";
	char	c = 'W';
	ft_putendl_fd(ft_strchr(str, c), 1);
}*/

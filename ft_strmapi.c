/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:52:52 by maabdela          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:55 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{   //char (*f)(unsigned int, char) refers to that f is a pointer to function that takes parameter from type
    //unsigned int and char and returns char 

    char *new; //pointer to char represent the memori alocation of the new str
    size_t len = ft_strlen(s); //size of s
    size_t i = 0;//loop incounter starts from 0

    if(!s){
        return (ft_strdup(""));
    }

    new = malloc(sizeof(char) * len + 1);

    if(!new){
        return (NULL);
    
    
    }

    while(i < len){
        new[i] = (*f)(i,s[i]);
        i++;
    }

    new[i] = '\0';
    return (new);
}
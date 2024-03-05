/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:52:52 by maabdela          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:55 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void    ft_bzero(void *s, size_t n)
{
    unsigned char *sptr;
    
    sptr = s;//unsigned to ensure we working in rang of 0 - 255

    while (n)
    {//the loop will iteratre n time undet the n number of byte all sit to zero
        *sptr++ = 0; // we increment to every byte of memore and sit what stored in it to zero
        n--;
    }
}

/*
int main(){

    char *ptr = NULL;
    ft_bzero(ptr, 10);

    // Test Size zero
    char test0[] = "Test";
    ft_bzero(test0, 0);
    return 0;
}

*/
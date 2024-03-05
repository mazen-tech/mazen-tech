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
static int get_size(int n)
{
    int size;

    size = 0;
    if(n <= 0)
        size ++;

    while (n != 0)
    {
        n = n / 10;
        size++;
    }
    return size;
}

static void filling_res(int size, int pica, int n, char *res){
    //n  holds the integer whose digits are to be filled in the array
    //res  is the pointer to the char array in which the digits of the integer n will be stored

    while(size > pica){
        res[size - 1] = n % 10 + '0';
        n = n / 10;
        size--;
    }
}
char *ft_itoa(int n)
{
    int pica = 0;
    int size = get_size(n);
    char *res = (char *)malloc(size +1);

    if(!res){
        return (0);
    }
    
    if(n == -2147483648){
        res[0] = '-';
        res[1] = '2';
        n = 147483648;
        pica = 2;
    }

    if(n < 0){
        res[0] = '-';
		pica = 1;
		n = -n;
    }
    filling_res(size,pica,n,res);
    res[size] = '\0';
    return (res);
}

/*int main(){
    int	i = 125;
	int	j = -814;
	int	min = -2147483648;
	int	max = 2147483647;
	ft_putstr_fd(ft_itoa(i), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_itoa(j), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_itoa(min), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_itoa(max), 1);
	ft_putchar_fd('\n', 1);
    return 0;
}*/
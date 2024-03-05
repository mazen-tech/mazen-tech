/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:52:52 by maabdela          #+#    #+#             */
/*   Updated: 2024/03/01 17:52:55 by maabdela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strjoin(char const *s1, char const *s2)
{
        char *dest;
        size_t len1;
        size_t len2;

        if(!s1 && !s2){
            return (ft_strdup(""));
        }

        if(s1 && !s2){
            return (ft_strdup(s1));
        }

        if(!s1 && s2){
            return (ft_strdup(s2));
        }

        len1 = ft_strlen(s1);
        len2 = ft_strlen(s2);
        dest = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

        if(!dest){
            return (NULL);
        }

        ft_strlcpy(dest, s1, len1 + 1);
        ft_strlcat(dest , s2, len1 + len2 + 1);
        dest[len1 + len2] = '\0';
        return(dest);
}
/*int	main()
{
	char	str[] = "mazen tarek";
	char	str1[] = " is student @42warsaw";
	ft_putendl_fd(ft_strjoin(str, str1), 1);
}*/
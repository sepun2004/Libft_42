/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:22:48 by sepun             #+#    #+#             */
/*   Updated: 2023/09/28 16:24:56 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned char cc = (unsigned char)c;
	char *str = (char *)s;

    while (*str != cc)
    {
        if (*str == '\0')
        {
            return NULL;
        }
        str++;
    }
    return str;
}

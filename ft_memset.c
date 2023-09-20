/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:21:45 by sepun             #+#    #+#             */
/*   Updated: 2023/09/14 15:33:26 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset (void *b, int x, int numero_bytes)
{
    unsigned char *s;
    size_t i;
    
    i = 0;
    s = b;
    while (i < numero_bytes)
    {
        s[i] = (unsigned char)x;
        i++;
    }
    return (b);
 }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:52:10 by sepun             #+#    #+#             */
/*   Updated: 2023/10/18 14:22:02 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char        *ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	j;
	unsigned int	len_total;
	char	*sub;
	if (!s)
		return(NULL);
	len_total = ft_strlen(s);
	if(start >=  len_total)
		return(ft_strdup(""));
	if (len < len_total -start)
		len = len_total -start;
	sub = malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return NULL;
	j = 0;
	while (start < len_total && j < len)
	{
		sub[j] = s[start];
		start++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
/*int main(void)
{
    const char *input = "Mi nombreee2e es Sebastian";
    unsigned int start = 5;
	size_t len = 7;
    
	printf("%s\n", input);
    printf("%ld\n", ft_strlen(input));
    printf("%s\n", ft_substr(input, start, len));
    return 0;
}*/

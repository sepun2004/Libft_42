/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sepun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:52:10 by sepun             #+#    #+#             */
/*   Updated: 2023/10/02 12:17:28 by sepun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (0);
		
	if (ft_strlen(s) < start)
		len = 0;
		
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret =(char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	char *temp_buf = (char *)s + start;
	ft_strlcpy(ret, temp_buf, len + 1);
	return (ret);
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

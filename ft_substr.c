/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:59:06 by salee2            #+#    #+#             */
/*   Updated: 2022/07/14 19:41:05 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*ret;
	const size_t	s_len = ft_strlen(s);

	if (s == 0)
		return (0);
	if (start >= s_len)
		len = 0;
	else if (s_len < len + start)
		len = s_len - start;
	ret = (char *) malloc(len + 1);
	if (ret == 0)
		return (0);
	i = 0;
	ft_memmove(ret, s + start, len);
	ret[len] = '\0';
	return (ret);
}
/*
#include <stdio.h>

int main()
{
	char * a = ft_substr("hola", 2, 30);
	printf("%s\n", a);


}

*/
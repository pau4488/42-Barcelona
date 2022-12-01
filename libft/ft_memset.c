/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:24:25 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/01 16:24:25 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void *ft_memset(void *s, int c, size_t len)
{
    size_t  i;

    i = 0;

    while (i < len)
    {
        ((unsigned char *)s)[i] = c;
        i++;
    }
    return (s);
}
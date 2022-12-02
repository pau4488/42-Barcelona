/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbrossa- <pbrossa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:34:55 by pbrossa-          #+#    #+#             */
/*   Updated: 2022/12/03 00:12:04 by pbrossa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

size_t    ft_strlcpy(char *restrict dest, const char *restrict src, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (src[j] != '\0')
		j++;
    if (n != 0){
        while(src[i] != '\0' && i < (n - 1)){
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (j);
}
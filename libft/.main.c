#include "libft.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    char    haystack[100] = "Hola Buenas que tal";
    char    needle[100] = "878";
    char    *destcpy;
    char    *srccpy;
    char    *aux;
    char    *aux2;
    char    c;
    int     i;

    i = 49;

    // len = ft_strlen(s);
    // printf("ft_strlen: %zu\n", len);
    // len = strlen(s);
    // printf("strlen: %zu\n", len);

    // memmove(dest, src, 100);
    // printf("memmove:\nsrc: %s\ndest: %s\n", src, dest);
    // ft_memmove(dest1, src1, 100);
    // printf("ft_memmove:\nsrc: %s\ndest: %s\n", src, dest);

    // strlcat (dest, src, 0);
    // printf("strlcat:    %s\n", dest);
    // ft_strlcat (destcpy, srccpy, 0);
    // printf("ft_strlcat: %s\n", destcpy);

    // aux = ft_strnstr(haystack, needle, 20);
    // aux2 = strnstr(haystack, needle, 20);
    // printf("\nft_strnstr:\n%s\n", aux);
    // printf("\nstrnstr:\n%s\n", aux2);

    // i = atoi("");
    // printf("\nAtoi: %i\n", i);

    ft_putnbr_fd(-1024,1);

    return 0;
}
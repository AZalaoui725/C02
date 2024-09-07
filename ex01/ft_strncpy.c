#include <string.h>
#include <stdio.h>

char    *ft_strncpy(char        *dest, char     *src, unsigned  int n)
{
        unsigned int    i;

        i = 0;
        while (src[i] != '\0' &&  i < n)
        {
                dest[i] = src[i];
                i++;
        }
        while (i < n)
        {
                dest[i] = '\0';
                i++;
        }
        return (dest);
}

/* 
int main()
{
	unsigned int   n;
	n = 5;
	char dest[6];
	char *src = "abc";
	printf("%s", ft_strncpy(dest, src, n));
}*/

#include <stdio.h>

char    *ft_strcpy(char *dest, char     *src)
{
        int     i;

        i = 0;
        while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (dest);
}
/*int main()
{
        char dest[100];
        char *src = "alaoui";
        printf("%s\n", ft_strcpy(dest, src));//write what the function return
}*/

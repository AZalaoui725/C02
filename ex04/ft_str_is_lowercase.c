#include <stdio.h>
int     ft_str_is_lowercase(char        *str)
{
        int     i;

        i = 0;
        while (str[i] >= 'a' && str[i] <= 'z')
        {
                i++;
        }
        if (str[i] == '\0')
                return (1);
        else
                return (0);
}
/*int main()
{
	printf("%d", ft_str_is_lowercase("asjfbe.kjfefek"));
}*/

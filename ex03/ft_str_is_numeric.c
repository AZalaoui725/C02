#include <stdio.h>
#include <unistd.h>

int     ft_str_is_numeric(char  *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
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
	printf("%d", ft_str_is_numeric("1221212121212112121212121212j12121"));
}*/

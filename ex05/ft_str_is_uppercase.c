#include <stdio.h>

int     ft_str_is_uppercase(char        *str)
{
        int     i;

        i = 0;
        while (str[i] >= 65 && str[i] <= 90)
	{
                i++;
	}
        if (str[i] == '\0')
                return (1);
        else
                return (0);
}
/*
int main()
{
	printf("%d\n", ft_str_is_uppercase("HELLO"));

}*/

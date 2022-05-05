char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    return (str);
}

#include <stdio.h>
int main(void)
{
    char teste1[] = "ä1";
    char *ponteiro1 = teste1;
    printf("%s\n", ft_strupcase(ponteiro1));

    char teste2[] = "{123}";
    char *ponteiro2 = teste2;
    printf("%s\n", ft_strupcase(ponteiro2));
    char teste3[] = "";
    char *ponteiro3 = teste3;
    printf("%s\n", ft_strupcase(ponteiro3));
    char teste4[] = "AAA";
    char *ponteiro4 = teste4;
    printf("%s\n", ft_strupcase(ponteiro4));
    char teste5[] = "erwfdsfds";
    char *ponteiro5 = teste5;
    printf("%s\n", ft_strupcase(ponteiro5));
}
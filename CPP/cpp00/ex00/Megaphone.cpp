#include <iostream>

char    *megaphone(char *str)
{
    int i = 0;

    while (str[i])
    {
        str[i] = std::toupper(str[i]);
        i++;
    }
    return (str);
}

int main(int ac, char **av)
{
    int     i = 1;
    char    *str_uppercase;

    if (ac > 1)
    {
        while (i < ac)
        {
            str_uppercase = megaphone(av[i]);
            std::cout << str_uppercase;
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDNACK NOISER *" << std::endl;
    return 0;
}

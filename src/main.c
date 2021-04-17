/*
** EPITECH PROJECT, 2020
** main
** File description:
** compilation
*/

#include "../lib/my.h"

int main(int ac, char **av)
{
    int fd = 0;
    char *str;
    struct stat sb;

    if (ac == 2) {
        stat(av[1], &sb);
        str = malloc(sizeof(char) * sb.st_size + 1);
        fd = open(av[1], O_RDONLY);
        if (fd == -1)
            return (84);
        read(fd, str, sb.st_size);
        bsq(str, sb.st_size);
        close(fd);
    } else
        return (84);
    return (0);
}

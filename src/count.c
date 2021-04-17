/*
** EPITECH PROJECT, 2020
** count
** File description:
** count a first line
*/

#include "../lib/my.h"

int count(char const *str)
{
    int a = 0;
    int nb = 0;

    while (str[a] != '\n') {
        if (str[a] >= '0' && str[a] <= '9')
            nb++;
        a++;

    }
    return (nb);
}
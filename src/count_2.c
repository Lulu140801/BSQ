/*
** EPITECH PROJECT, 2020
** count
** File description:
** count with backslash n
*/

#include "../lib/my.h"

int count_2(char const *str)
{
    int a = 0;

    while (str[a] != '\n') {
        a++;
    }
    return (a);
}

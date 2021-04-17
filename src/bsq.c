/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** find a bigest square
*/

#include "../lib/my.h"

char *put_map_solved(int nb, int i, char *dest, char *src)
{
    int nb2 = (src[nb] - 48);
    int nb3 = (src[nb] - 48);
    int p3 = nb - ( i * (nb2 - 1) + (nb2 - 1));
    int p4 = p3 - (nb3 - 1);

    for (int a = 0, c = 0; dest[a] != '\0'; a++) {
        if (c == 1 && dest[a] == '\n') {
            nb2--;
            p3 = nb - ( i * (nb2 - 1) + (nb2 - 1));
            p4 = p3 - (nb3 - 1);
        }
        if (a >= p4 && a <= p3 && a <= nb) {
            c = 1;
            dest[a] = 'x';
        }
    }
    return (dest);
}

int compt(char *src)
{
    int result = 0;

    for (int a = 0, nb = 0, size = 0;src[a] != '\0';) {
        if (src[a] == 'o')
            a++;
        else if (src[a] == '\n')
            a++;
        else {
            nb = src[a] - 48;
            if (nb > size) {
                size = nb;
                result = a;
            }
            a++;
        }
    }
    return (result);
}

int verif_2(int a, int b, int c)
{
    if (a < b)
        b = a;
    else
        a = b;

    if (a < c)
        c = a;
    else
        a = c;
    return (a + 1);
}

int verif(char *s, int nb, int i)
{
    int size = nb - i;

    if (nb < i)
        return (1);
    if (s[size - 2] == 'o' || s[size - 1] == 'o' || s[nb - 1] == 'o')
        return (1);
    else if (s[size - 2] == '\n' || s[size - 1] == '\n' || s[nb - 1] == '\n')
        return (1);

    int a = s[size - 2] - 48;
    int b = s[size - 1] - 48;
    int c = s[nb - 1] - 48;

    if (a == b && b == c)
        return (a + 1);
    else {
        a = verif_2(a, b, c);
        return (a);
    }
}

void bsq(char *str, int i)
{
    char *src = malloc(sizeof(char) * (i + 1));
    char *dest = malloc(sizeof(char) * (my_strlen(str) + 1));

    i = count(str);
    dest = my_strcpy_modified(dest, str, i + 1);
    i = count_2(dest);
    for (int nb = 0, nb2 = 0; dest[nb] != '\0'; nb++) {
        if (dest[nb] == '.') {
            nb2 = verif(src, nb, i);
            src[nb] = nb2 + 48;
        }
        else
            src[nb] = dest[nb];
    }
    int nb = compt(src);
    dest = put_map_solved(nb, i, dest, src);
    my_putstr(dest);
}
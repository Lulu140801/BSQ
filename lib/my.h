/*
** EPITECH PROJECT, 2020
** My.h
** File description:
** Header on my lib
*/

#ifndef MY_H
#define MY_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);
char *my_strcpy_modified(char *dest, char const *src, int nb);
int count(char const *str);
void bsq(char *str, int i);
int count_2(char const *str);
int my_putstr(char const *str);

#endif

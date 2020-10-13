#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>

char	*create_array(unsigned int size, char c);
char	*_strdup(char *str);
size_t	_strlen(char *str);
size_t	_strlen_cat(char *str);
char	*str_concat(char *s1, char *s2);
int	**alloc_grid(int width, int height);

#endif

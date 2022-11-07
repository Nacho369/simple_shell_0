#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifdef __GNUC__
#define UNUSED __attribute__(( unused ))
#endif
#define BUFFER_SIZE 1024

int _strcmp(char *s1, char *s2);

#endif

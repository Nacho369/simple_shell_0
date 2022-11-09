#ifndef SHELL_H
#define SHELL_H

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#endif
#define BUFFER_SIZE 1024

char *builtin_str[] = {
    "cd",
    "help",
    "exit"};

int (*builtin_func[])(char **) = {
    &lsh_cd,
    &lsh_help,
    &lsh_exit};

int _strcmp(char *s1, char *s2);
int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);
int lsh_num_builtins();
char **lsh_split_line(char *line);
char *lsh_read_line(void);
void lsh_loop(void);

#endif

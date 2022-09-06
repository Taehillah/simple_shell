#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <limits.h>
#include <sys/wait.h>
#include <sys/types.h>
extern char **environ;

char *show_input(void);
void prompt(void);
char *_strcat(char *src);
int _strlen(char *str);
#endif

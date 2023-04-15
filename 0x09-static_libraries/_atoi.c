#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int _atoi(char *s)
{
int sign = 1;
int res = 0;

if (*s == '-')
sign = -1, s++;

for (; *s != '\0'; s++)
{
if (*s < '0' || *s > '9')
break;
res = res * 10 + (*s - '0');
}

return (sign * res);
}

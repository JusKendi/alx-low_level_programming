#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char *_strncat(char *dest, char *src, int n)
{
char *temp = dest;

while (*dest != '\0')
dest++;

for (int i = 0; i < n && *src != '\0'; i++)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return temp;
}

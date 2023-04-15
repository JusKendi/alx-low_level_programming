#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char *_strncpy(char *dest, char *src, int n)
{
char *temp = dest;

for (int i = 0; i < n; i++)
{
*dest = *src;
if (*src != '\0')
src++;
dest++;
}
return (temp);
}

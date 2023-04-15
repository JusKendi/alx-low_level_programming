#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
if (_strchr(accept, *s) != NULL)
{
return (s);
}
s++;
}
return (NULL);
}

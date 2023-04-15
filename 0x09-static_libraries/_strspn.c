#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
unsigned int _strspn(char *s, char *accept)
{
char *p = s;
while (*p)
{
if (_strchr(accept, *p) == NULL)
{
break;
}
p++;
}
return (p - s);
}

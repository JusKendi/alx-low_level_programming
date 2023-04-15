#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack, *n = needle;
while (*haystack && *n && (*haystack == *n))
{
haystack++;
n++;
}
if (!*n)
{
return (h);
}
haystack = h + 1;
}
return (NULL);
}

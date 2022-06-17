#include "main.h"
/**
 * leet - encodes a string
 * @str: the string to encode
 *
 * Return: the encode string
 */
char *leet(char *str)
{
int i, j;
char c[] = "aAeEoOtTlL";
char n[] = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; c[j] != '\0'; j++)
{
if (str[i] == c[j])
{
str[i] = n[j];
}
}
}
return (str);
}

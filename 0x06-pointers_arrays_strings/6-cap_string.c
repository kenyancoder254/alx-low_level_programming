#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - capitalizes all words of a string
 *
 * @str: pointer to a string
 * Return: str
 */
char *cap_string(char *str)
{
int capitalize_next;
char *ptr;

capitalize_next = 1;
for (ptr = str; *ptr != '\0'; ptr++)
{
        if (capitalize_next && isalpha(*ptr))
        {
                *ptr = toupper(*ptr);
                capitalize_next = 0;
        }
        else if (!isalpha(*ptr))
        {
                capitalize_next = 1;
        }
}
        return (str);
}

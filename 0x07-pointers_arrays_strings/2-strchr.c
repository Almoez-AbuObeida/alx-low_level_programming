#include "main.h"

/**
* _strchr - A function that locates a character in a string.
* @s: A string to locat characters.
* @c: A char to locat.
* Return: a pointer if found or NULL if not.
*/

char *_strchr(char *s, char c)
{
	 char *p = NULL;
    /*handling null pointer*/
    if(s != NULL)
    {
        do
        {
            if( *s == (char)c )
            {
                p = s;
                break;
            }
        }
        while(*s++);
    }
    return p;
}

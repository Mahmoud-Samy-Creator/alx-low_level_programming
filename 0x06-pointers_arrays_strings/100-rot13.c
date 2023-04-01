#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @s: int type array pointer
 * Return: encoded
 */

char *rot13(char *s)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for ( i = 0 ; s[i] != '\0' ; i++ )
	{
		for ( j = 0 ; j< 54 ; j++)
		{
			if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && s[i] == alpha[i])
			{
				s[i] = rot13[i];
				break;
			}
		}	
	}
	return (s);
}

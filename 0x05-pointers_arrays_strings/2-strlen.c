#include "main.h"

/**
*_strlen - returns the length of a string
*@s: string
*Return: returns length a integer;
*/

int _strlen(char *s)
{

	int len = 0;
	
	while(s(s + len) ! = '\0')
		len++;

	return(len);
}

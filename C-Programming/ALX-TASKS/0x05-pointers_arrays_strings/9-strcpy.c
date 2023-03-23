/**
* _strcpy - Copy string
* @*dest: Pointer to copy string into
* @*str: String to cpty
*
* Return: Copied string
*/
char* _strcpy (char* dest, char* str)
{	
	int len = 0;

	while ( *str != '\0')
	{
		*(dest + len) = *str;
		str++;
		len++;
	}
	*(dest + len) = '\0';

	return dest;
}

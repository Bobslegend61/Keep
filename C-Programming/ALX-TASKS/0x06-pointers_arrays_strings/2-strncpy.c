/**
* _strncpy - A function that copies a string.
* @*dest: Destination
* @*src: Source
* @n: Length of source to copy
*
* Return: Pointer to destination
*/
char* _strncpy (char* dest, char* src, int n)
{
	char* p = dest;
	int i = 0;

	while (i < n)
	{
		if ( *src != '\0')
		{
			*dest = *src;
			src++;
		}
		else
			*dest = '\0';
		dest++;
		i++;
	}
	return p;
}

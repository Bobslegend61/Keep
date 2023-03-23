/**
* _strncat - A function that concatenates two strings.
* @*dest: Destination
* @*src: Source
* @n: Concat n times
*
* Returns: Pointer to @dest
*/
char* _strncat (char* dest, char* src, int n)
{
	char* p = dest;
	int i;

	while (*dest != '\0')
		dest++;

	i = 1;
	while (i <= n)
	{
		if (*src == '\0')
			break;
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return p;	
}

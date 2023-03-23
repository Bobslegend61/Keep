/**
* _strcat - Concatenates two string
* @*dest: Concat destination
* @*str: String to concat
*/
char* _strcat (char* dest, char* str)
{
	char* p = dest;

	while (*dest != '\0')
		dest++;

	while (*str != '\0')
	{
		*dest = *str;
		dest++;
		str++;
	}

	return p;
}

/**
* cap_string - Capitalize all wprds of a string
* @str: String pointer
*
* Return: String pointer
*/
char* cap_string (char* str)
{
	char* p = str;

	while (*str != '\0')
	{
		if (
		      (
			*str == '\t' ||
			*str == 32 ||
			*str == '\n' ||
			*str == ',' ||
			*str == ';' ||
			*str == '.' ||
			*str == '!' ||
			*str == '?' ||
			*str == '{' ||
			*str == '}' ||
			*str == '(' ||
			*str == ')'
		      ) && 
		      (
			*(str + 1) >= 'a' && *(str + 1) <= 'z'
		      )
		    )
			{
				*(str + 1) = *(str + 1) - 32;
			}
		str++;
	}
	return p;
}

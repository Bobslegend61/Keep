/**
* string_toupper - Change all lowercase to uppercase
* @*str: String
*
* Return: Pointer to string
*/
char* string_toupper (char* str)
{
	char* p = str;

	while (*str != '\0')
	{
		if (*str > 'Z')
		{
			char diff = *str - 'a';
		
			*str = 'A' + diff;
		}
		str++;
	}	
	return p;
}

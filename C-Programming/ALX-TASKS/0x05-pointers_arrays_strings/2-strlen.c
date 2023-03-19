/**
* _strlen - Returns the length of a string
* @*s: String to check
*
* Return: The length of the string
*/
int _strlen (char *s)
{
	int i = 0;
	int c = 0;

	while (s[i])
	{
		c+= 1;
		i++;
	}
	return c;
	
}

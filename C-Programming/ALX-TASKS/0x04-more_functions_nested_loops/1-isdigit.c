/**
* _isdigit - Checks if a value is a digit
*@c: Character to check
*
* Return: 1 if true else false
*/
int _isdigit (int c)
{
	if (c >= '0' && c <= '9')
	{
		return 1;
	}
	return 0;
}

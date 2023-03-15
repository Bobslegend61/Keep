/**
* _isalpha - Checks for alphabets character
* @i: Character to chect
*
* Return: 1 if true else 0
*/
int _isalpha (int i)
{
	if((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
	{
		return 1;
	}
	return 0;
}

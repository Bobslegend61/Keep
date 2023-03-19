/**
* rev_string - Reverse a string
* @*s: String to reverse
*/
void rev_string (char* s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i <= (len / 2))
	{
		char temp = *(s + (len - (i + 1)));
		*(s + (len - (i + 1))) = s[i];
		*(s + i) = temp; 
		i++;
	}
}

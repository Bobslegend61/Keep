/**
* reverse_array - Reverse an array
* @*a: The array
* @n: Size of array
*/
void reverse_array (int* a, int n)
{
	int half = (n - 1) / 2;
	int i = 0;
	
	for (; i <= half; i++)
	{
		int temp = a[i];
		
		*(a + i) = *(a + (n - (i + 1)));
		*(a + (n - (i + 1))) = temp;
	}
	
}

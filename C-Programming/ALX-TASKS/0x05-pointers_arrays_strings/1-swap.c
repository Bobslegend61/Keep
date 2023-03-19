/**
* swap_int - Swap value of two integers
* @*a: Pointer to a
* @*b: Pointer to b
*/
void swap_int (int *a, int *b)
{
	int swap_a = *b;
	int swap_b = *a;

	*a = swap_a;
	*b = swap_b;
}

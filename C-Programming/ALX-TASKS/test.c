#include <stdio.h>

struct Person
{
	char *fn;
	char *ln;
};

/**
 * main - test
 *
 *
 */

int main (void)
{
	struct Person person;
	char *p;
	struct Person *prt;
	
	person.fn = "Alabi";
	person.ln = "Emmanuel";
	p = person.ln;
	prt = &person;

	printf("%s\n", person.fn);
	printf("%s\n", person.ln);
	printf("%s\n", p);
	printf("%s\n", prt->fn);
	return 0;
}

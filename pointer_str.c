#include <stdio.h>

int main()
{
	char *p="Lebron is the best";
	printf("%s\n",p);
	p="James Harden is the best";
	printf("%s\n",p);
	/*
	p[0]='A';
	p: data segment(changeable)    "James Harden is the best": text segment(unchangable)
	*/
	return 0;
}

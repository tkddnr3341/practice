#include <stdio.h>

int main()
{
	int answer;
	char *p="Lebron is the best";
	char *q="James Harden is the best";
	p=q;
	printf("%s\n",p);
	if (p==q)
	{
		answer=0;
	}
	printf("%d\n",answer);
	/*
	p[0]='A';
	p: data segment(changeable)    "James Harden is the best": text segment(unchangable)
	*/
	return 0;
}

#include <stdio.h>

void set_pointer(char** p);

int main()
{
	char *p="Today is a bad day";
	printf("%s\n",p);
	set_pointer(&p);
	printf("%s\n",p);
	return 0;
}

void set_pointer(char **p)
{
	*p="Chaos is always with you";
}

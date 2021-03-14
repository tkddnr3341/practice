#include <stdio.h>
void print_strings(char darray[][50],int size);
void print_pa(char *array[],int size);

int main()
{
	char string[3][50]={"James Harden",
		"Kevin Durant",
		"Kyrie Irving"};
	char *pointerarray[3]={"SSS class",
		"suicidal",
		"Hunter"};
	print_strings(string,3);
	print_pa(pointerarray,3);
	return 0;
}

void print_strings(char darray[][50],int size)
{
	for (int i1=0;i1<size;i1++)
	{
		char *p;
		p=darray[i1];
		printf("%s\n",p);
	}
}

void print_pa(char *array[],int size)
{
	for (int i=0;i<size;i++)
	{
		printf("%s\n",array[i]);
	}
}






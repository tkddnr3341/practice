#include <stdio.h>

int main()
{
	int ch;		//int getchar()
	printf("input character: ");
	ch=getchar();
	printf("ASCII: %d\n",ch);
	printf("character: ");
	putchar(ch);
	printf("\n");
	printf("EOF(End of file) = %d\n",EOF);		//ctrl+z
	return 0;
}	

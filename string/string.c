#include <stdio.h>
int main()
{
	char str[4];
	int i=0;
	str[0]='a';
	str[1]='b';
	str[2]='c';
	str[3]='\0';
	while (str[i]!='\0')
	{
		printf("%c",str[i]);
		i++;
	}
	printf("\n");
	return  0;
}

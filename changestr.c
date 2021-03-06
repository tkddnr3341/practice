#include <stdio.h>
void change_str(char string[10]);

int main()
{
	char str[10]="Lebron";
	change_str(str);	
	printf("%s\n",str);
	return 0;
}

void change_str(char string[10])
{
	char str[10]="Harden";
	for (int i=0;i<10;i++)
	{
		string[i]=str[i];
	}
	printf("%s\n",string);
}

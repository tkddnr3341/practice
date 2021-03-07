#include <stdio.h>
#include <string.h>

void change_str(char string[],int len1);
void change_string(char* p);
int lenstr(char string[]);

int main()
{
	char str[]="King Lebron James ";
	char* p="James";
	printf("%s\n",str);
	printf("%s\n",p);
	strcpy(str,"Lakers Lebron");
	p="James Harden";
	//strcpy(p,"James") not possible (segment)
	printf("%s\n",str);
	printf("%s\n",p);
	int len;
	len=lenstr(str);
	change_str(str,len);
	change_string(p);	
	printf("%s\n",str);
	printf("%s\n",p);
	return 0;
}

void change_str(char string[],int len1)
{
	char str[]="Jame Harden";
	int len2;
	len2=lenstr(str);
	if(len1>=len2)
	{
       		strcpy(string,str);
       		printf("%s\n",string);
	}

	else
	{
		printf("too long\n");
	}
}

void change_string(char *p)
{
	p="James Harden is the best";
}

int lenstr(char string[])
{
	int size=0;
	while (string[size]!='\0')
	{
		size+=1;
	}
	return size;
}
